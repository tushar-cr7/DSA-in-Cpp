#include <iostream>
#include <vector>
using namespace std;

void dfsUtil(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfsUtil(neighbor, adj, visited);
        }
    }
}

void dfs(int start, vector<vector<int>>& adj, int n) {
    vector<bool> visited(n, false);
    dfsUtil(start, adj, visited);
}

int main() {
    int n = 5;
    vector<vector<int>> adj(n);

    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 4};
    adj[3] = {1};
    adj[4] = {2};

    cout << "DFS Traversal: ";
    dfs(0, adj, n);

    return 0;
}
