import java.io.*;
import java.util.*;

class Graphs{

	static int V = 5;
	
	static void addEdge(ArrayList<ArrayList <Integer>> adj,int v,int u){
		adj.get(u).add(v);
		adj.get(v).add(u);
	}

	static void printGraph(ArrayList<ArrayList<Integer>> adj){
		for(int i=0;i<adj.size();i++){
			System.out.println("Adj List of :"+i);
			for(int j=0;j<adj.get(i).size();j++)
				System.out.print(adj.get(i).get(j)+" ");
			System.out.println("\n");
		}
	}

	public static void main(String args[]){
		
		ArrayList<ArrayList<Integer>> adj = new ArrayList<ArrayList<Integer>>(V);
		for(int i=0;i<V;i++)
			adj.add(new ArrayList<Integer>());

		addEdge(adj,0,1);
		addEdge(adj,0,4);
		addEdge(adj,1,2);
		addEdge(adj,1,3);
		addEdge(adj,1,4);
		addEdge(adj,2,3);
		addEdge(adj,3,4);
		printGraph(adj);

	}
}
