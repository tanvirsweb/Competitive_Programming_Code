#include <bits/stdc++.h>
using namespace std;

struct Robot
{
    int r, c;
    char dir;
};

void moveRobot(Robot &robot, const vector<string> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    int new_r = robot.r;
    int new_c = robot.c;

    switch (robot.dir)
    {
    case 'L':
        new_c = robot.c - 1;
        break;
    case 'R':
        new_c = robot.c + 1;
        break;
    case 'U':
        new_r = robot.r - 1;
        break;
    case 'D':
        new_r = robot.r + 1;
        break;
    }

    if (new_r >= 1 && new_r <= n && new_c >= 1 && new_c <= m && grid[new_r - 1][new_c - 1] == '.')
    {
        robot.r = new_r;
        robot.c = new_c;
    }
    else
    {
        switch (robot.dir)
        {
        case 'L':
            robot.dir = 'R';
            break;
        case 'R':
            robot.dir = 'L';
            break;
        case 'U':
            robot.dir = 'D';
            break;
        case 'D':
            robot.dir = 'U';
            break;
        }
    }
}

int main()
{
    int n, m, x, k;
    cin >> n >> m >> x >> k;

    vector<string> grid(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> grid[i];
    }

    vector<Robot> robots(x);
    for (int i = 0; i < x; ++i)
    {
        cin >> robots[i].r >> robots[i].c >> robots[i].dir;
    }

    for (int sec = 0; sec < k; ++sec)
    {
        for (Robot &robot : robots)
        {
            moveRobot(robot, grid);
        }
    }

    for (const Robot &robot : robots)
    {
        cout << robot.r << " " << robot.c << " " << robot.dir << endl;
    }

    return 0;
}