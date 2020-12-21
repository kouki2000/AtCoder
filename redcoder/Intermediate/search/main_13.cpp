#include <iostream>
#include <vector>
using namespace std;

// グラフ型
using Graph = vector<vector<int>>;

vector<bool> seen;

void dfs(const Graph &G, int vertex)
{

    seen[vertex] = true;

    for (auto next_v : G[vertex])
    {
        cout << next_v << endl;
        if (seen[next_v])
        {
            continue;
        }
        dfs(G, next_v);
    }
}

int main()
{
    int vertexes, edges;
    cout << "vertexes:";
    cin >> vertexes;
    cout << "edges:";
    cin >> edges;

    Graph G(vertexes);
    cout << "vertex combination" << endl;
    for (int i = 0; i < edges; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    seen.assign(vertexes, false);
    dfs(G, 0);
}