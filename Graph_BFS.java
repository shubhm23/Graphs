import java.io.*;
import java.util.*;

class Graph_BFS{
	private int V;
	private LinkedList<Integer> adj[];

	Graph_BFS(int V){
		this.V = V;
		adj = new LinkedList[V];
		for(int i=0;i<V;++i)
			adj[i] = new LinkedList();
	}

	void addEdge(int m,int w){
		adj[m].add(w);
		adj[w].add(m);
	}

	void BFS(int s){
		boolean visited[] = new boolean[V];
		LinkedList<Integer> queue = new LinkedList<Integer>();
		visited[s] = true;
		queue.add(s);
		while(queue.size() != 0){
			s = queue.poll();
			System.out.println(s+" ");
			Iterator<Integer> i = adj[s].listIterator();
			while(i.hasNext()){
				int n = i.next();
				if(!visited[n]){
					visited[n] = true;
					queue.add(n);
				}
			}
		}
	}

	public static void main(String [] args){
		
		Graph_BFS g = new Graph_BFS(10);
		g.addEdge(0, 1);
    		g.addEdge(0, 4);
    		g.addEdge(1, 2);
    		g.addEdge(1, 3);
    		g.addEdge(1, 4);
    		g.addEdge(2, 3);
    		g.addEdge(3, 4);
       		g.BFS(1);
     }
}

