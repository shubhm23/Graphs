import java.io.*;
import java.util.*;

class Graph_DFS{
	private int V;
	private ArrayList<Integer> adj[];
	boolean visited[];
	
	void addEdge(int m,int n){
		adj[m].add(n);
		adj[n].add(m);
	}

	Graph_DFS(int V){
		this.V = V;
		visited = new boolean[V];
		adj = new ArrayList[V];
		for(int i=0;i<V;++i)
			adj[i] = new ArrayList();
	}

	void DFS(int s){
		visited[s] = true;
		System.out.printf(s+"\t");
		Iterator<Integer> it = adj[s].iterator();
		while(it.hasNext()){
			int n = it.next();
			if(!visited[n]){
				visited[n] = true;
				DFS(n);
			}
		}
	}

	public static void main(String ags[])
	{
		Graph_DFS g = new Graph_DFS(9);
		g.addEdge(1,2);
		g.addEdge(1,3);
		g.addEdge(2,3);
		g.addEdge(2,4);
		g.addEdge(2,5);
		g.addEdge(3,5);			
		g.addEdge(3,7);
		g.addEdge(3,8);
		g.addEdge(4,5);
		g.addEdge(5,6);
		g.addEdge(7,8);
		g.DFS(1);
	}
}