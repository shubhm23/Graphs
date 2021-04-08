#include<bits/stdc++.h>
using namespace std;


void addEdge(std::vector<int> adj[],int m,int n){
	adj[m].push_back(n);
	adj[n].push_back(m);
}

void printGraph(vector<int> adj[],int V){
	for(int v = 0;v<V;v++)
	{
		cout<<"\n head";
		for(auto x: adj[v]){
			cout<<"-->"<<x;
		}
		cout<<"\n";
	}
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r", stdin);
		freopen("output.txt","w",stdout);
	#endif
	int V = 5;
	std::vector<int> adj[V];
	addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    printGraph(adj, V);
}

