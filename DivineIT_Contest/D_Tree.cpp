#include <bits/stdc++.h>
using namespace std;

struct Edge
{
    int u, v, weight;
    bool operator<(Edge const &other)
    {
        return weight < other.weight;
    }
};

vector<int> parent, rank_;

void make_set(int v)
{
    parent[v] = v;
    rank_[v] = 0;
}

int find_set(int v)
{
    if (v == parent[v])
        return v;

    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);

    if (a != b)
    {
        if (rank_[a] < rank_[b])
            swap(a, b);
        parent[b] = a;
        if (rank_[a] == rank_[b])
            rank_[a]++;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<Edge> edges(m);

    for (int i = 0; i < m; i++)
    {
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    }

    sort(edges.begin(), edges.end());

    parent.resize(n + 1);
    rank_.resize(n + 1);

    for (int i = 1; i <= n; i++)
        make_set(i);

    int total_weight = 0;

    for (Edge e : edges)
    {
        if (find_set(e.u) != find_set(e.v))
        {
            total_weight += e.weight;
            union_sets(e.u, e.v);
        }
    }

    cout << total_weight << endl;
    return 0;
}