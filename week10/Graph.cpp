#include<iostream>
#include<map>
#include<list>
#include<queue>
using namespace std;

struct Graph{

	map<int ,list<int> > adjList;

	Graph(){


	}
	void addEdge(int u, int v,bool check=true){

		adjList[u].push_back(v);
		if(check){
			adjList[v].push_back(u);
		}
	}

	void print(){

		for(auto i:adjList){
			cout<<i.first<<" -> ";

			for(int entry:i.second){
				cout<<entry<<",";
			}
			cout<<endl;
		}
	}
	
	void bfs(int n){
		
		queue<int> q;
		map<int,bool> visited;

		q.push(n);
		visited[n] = true;

		while(!q.empty()){

			int node = q.front();
			cout<<node<<" ";
			q.pop();

			// tim cac nut ko dc truy cap
			for(int neigbour :adjList[node]){
				if(!visited[neigbour]){
					q.push(neigbour);
					visited[neigbour] = true;
				}
			}
		}
        cout<<endl;
	}
    void dfsHelper(int node,map<int,bool> &visited){
		// danh dau 1 nut da dc truy cap
		visited[node] = true;
		cout<<node<<" ";

		// tim nut o gan ma chua dc truy cap
		for(int neighbour: adjList[node]){
			if(!visited[neighbour]){
				dfsHelper(neighbour,visited);
			}
		}
	}

	void dfs(int n){
		map<int,bool> visited;
		dfsHelper(n,visited);
	}
    
};

int main(){


	Graph g;
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(0,4);
	g.addEdge(2,4);
	g.addEdge(2,3);
	g.addEdge(3,5);
	g.addEdge(3,4);

	g.bfs(0);
    g.print();
}