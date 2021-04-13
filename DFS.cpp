#include<iostream>
#include<vector>
using namespace std;

void addEdge(vector<int> adj[],int m,int n){
	adj[m].push_back(n);
	adj[n].push_back(m);
}

void DFS (bool visited[],vector<int> adj[],int index)
{
	visited[index] = true;
	cout<<index<<"\t";
	for(auto x: adj[index])
		if(!visited[x])
			DFS(visited,adj,x);
}

void printGraph(vector<int> adj[],int V){
	for(int v = 1;v<V;v++)
	{
		cout<<"\n head: "<<v;
		for(auto x: adj[v]){
			cout<<" -->"<<x;
		}
		cout<<"\n";
	}
}


int main(){
	int V = 9;
	vector<int> adj[V];
	bool visited[V];
	for(int i;i<V;i++)
		visited[i] = false;
	addEdge(adj,1,2);
	addEdge(adj,1,3);
	addEdge(adj,2,3);
	addEdge(adj,2,4);
	addEdge(adj,2,5);
	addEdge(adj,3,5);			
	addEdge(adj,3,7);
	addEdge(adj,3,8);
	addEdge(adj,4,5);
	addEdge(adj,5,6);
	addEdge(adj,7,8);
    //printGraph(adj,V);
	DFS(visited,adj,1);
	return 0;
}
