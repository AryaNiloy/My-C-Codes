#include <iostream>
#include <vector>
#include <list>

using namespace std;

// Class to represent a graph
class Graph {
public:
    int V; // Number of vertices
    list<int> *adj; // Adjacency list

    // Constructor to initialize the graph with vertices
    Graph(int V);

    // Function to add an edge to the graph
    void addEdge(int v, int w);

    // Function to check if all non-zero degree vertices are connected
    bool isConnected();

    // Function to check if the graph has an Euler Circuit
    bool hasEulerCircuit();

    // Function to check if the graph has an Euler Path

    bool hasEulerPath();

private:
    // Helper function to perform DFS traversal
    void DFS(int v, vector<bool> &visited);
};

// Constructor for the graph class
Graph::Graph(int V) {
    this->V = V;
    adj = new list<int>[V];
}

// Function to add an edge to the graph
void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
    adj[w].push_back(v);
}

// Helper function to perform DFS traversal
void Graph::DFS(int v, vector<bool> &visited) {
    visited[v] = true;
    for (int neighbor : adj[v]) {
        if (!visited[neighbor]) {
            DFS(neighbor, visited);
        }
    }
}

// Function to check if the graph is connected
bool Graph::isConnected() {
    vector<bool> visited(V, false);

    // Find a vertex with a non-zero degree
    int i;
    for (i = 0; i < V; i++) {
        if (!adj[i].empty())
            break;
    }

    // If no edges exist, return true
    if (i == V) {
        return true;
    }

    // Perform DFS from the first vertex with a non-zero degree
    DFS(i, visited);

    // Check if all vertices with non-zero degree are visited
    for (i = 0; i < V; i++) {
        if (!visited[i] && !adj[i].empty())
            return false;
    }
    return true;
}

// Function to check if the graph has an Euler Circuit
bool Graph::hasEulerCircuit() {
    // Check if the graph is connected
    if (!isConnected())
        return false;

    // Check if all vertices have even degree
    for (int i = 0; i < V; i++) {
        if (adj[i].size() % 2 != 0)
            return false;
    }
    return true;
}

// Function to check if the graph has an Euler Path
bool Graph::hasEulerPath() {
    // Check if the graph is connected
    if (!isConnected())
        return false;

    // Count vertices with odd degree
    int oddCount = 0;
    for (int i = 0; i < V; i++) {
        if (adj[i].size() % 2 != 0)
            oddCount++;
    }

    // An Euler Path exists if there are exactly two vertices with odd degree
    return (oddCount == 2);
}

int main() {
    int vertices, edges;
    cout << "Enter number of vertices: ";
    cin >> vertices;
    cout << "Enter number of edges: ";
    cin >> edges;

    Graph g(vertices);
    cout << "Enter edges (u v):\n";
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }

    if (g.hasEulerCircuit()) {
        cout << "The graph has an Euler Circuit.\n";
    } else if (g.hasEulerPath()) {
        cout << "The graph has an Euler Path.\n";
    } else {
        cout << "The graph has neither an Euler Path nor an Euler Circuit.\n";
    }

    return 0;
}
