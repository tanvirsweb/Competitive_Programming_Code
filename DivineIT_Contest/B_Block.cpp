
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> blocks;
vector<int> block_pos;

void return_blocks_above(int a)
{
    int pos = block_pos[a];
    while (blocks[pos].back() != a)
    {
        int top = blocks[pos].back();
        blocks[top].push_back(top);
        block_pos[top] = top;
        blocks[pos].pop_back();
    }
}

void move_single(int a, int b_pos)
{
    int a_pos = block_pos[a];
    blocks[a_pos].pop_back();
    blocks[b_pos].push_back(a);
    block_pos[a] = b_pos;
}

void move_pile(int a, int b_pos)
{
    int a_pos = block_pos[a];
    vector<int> pile;
    size_t idx = 0;

    for (size_t i = 0; i < blocks[a_pos].size(); ++i)
    {
        if (blocks[a_pos][i] == a)
        {
            idx = i;
            break;
        }
    }

    for (size_t i = idx; i < blocks[a_pos].size(); ++i)
    {
        pile.push_back(blocks[a_pos][i]);
    }

    blocks[a_pos].resize(idx);

    for (int block : pile)
    {
        blocks[b_pos].push_back(block);
        block_pos[block] = b_pos;
    }
}

int main()
{
    int n;
    cin >> n;
    blocks.resize(n);
    block_pos.resize(n);

    for (int i = 0; i < n; ++i)
    {
        blocks[i].push_back(i);
        block_pos[i] = i;
    }

    string line;
    cin.ignore(); // flush newline after reading n

    while (getline(cin, line))
    {
        if (line.empty())
            continue;
        if (line == "quit")
            break;

        istringstream iss(line);
        string cmd, prep;
        int a, b;
        iss >> cmd >> a >> prep >> b;

        if (a == b || block_pos[a] == block_pos[b])
            continue;

        if (cmd == "move")
        {
            if (prep == "onto")
            {
                return_blocks_above(a);
                return_blocks_above(b);
            }
            else if (prep == "over")
            {
                return_blocks_above(a);
            }
            move_single(a, block_pos[b]);
        }
        else if (cmd == "pile")
        {
            if (prep == "onto")
            {
                return_blocks_above(b);
            }
            move_pile(a, block_pos[b]);
        }
    }

    // Output final block configuration
    for (int i = 0; i < n; ++i)
    {
        cout << i << ":";
        for (int block : blocks[i])
        {
            cout << " " << block;
        }
        cout << endl;
    }
    return 0;
}
