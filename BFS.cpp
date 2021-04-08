#include<iostream>
#include<list>
using namespace std;


class Graph{
	int V;
	list<int> *adj;
public :
	Graph(int V);
	void addEdge(int m,int w);
	void BFS(int s);
};

Graph :: Graph(int V){
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int m,int w){
	adj[m].push_back(w);
	adj[w].push_back(m);
}

void Graph::BFS(int s){
	bool *visited = new bool[V];
	for(int i=0;i<V;i++)
		visited[i] = false;
	
	list<int> queue;
	visited[s] = true;
	queue.push_back(s);

	list<int> :: iterator i;
	while(!queue.empty())
	{	
		s = queue.front();
		queue.pop_front();
		cout<<s<<" ";
		for(i=adj[s].begin();i!=adj[s].end();++i){
			if(!visited[*i])
			{
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}	
}


int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r", stdin);
		freopen("output.txt","w",stdout);
	#endif

	Graph g(10);
	g.addEdge(0, 1);
    	g.addEdge(0, 4);
    	g.addEdge(1, 2);
    	g.addEdge(1, 3);
    	g.addEdge(1, 4);
    	g.addEdge(2, 3);
    	g.addEdge(3, 4);
       	g.BFS(1);
}

