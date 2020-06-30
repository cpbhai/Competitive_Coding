/*
# Program to find the maximum vertex in a graph [ Using BFS ].
 __	__  __  	  __
|  |   |  | \ \          / /
|  |___|  |  \ \        / /
|  arsh   |   \ \      / /
|   ___   |    \ \____/ /
|  |   |  |     \ code /
|__|   |__|      \____/
*/
#include<bits/stdc++.h>
using namespace std;
class Graph{
	int siz;
	list<int> *arr;
	public:
		int maxi=0;
		void addEdge(int x, int y);
		Graph(int v);
		void BFS(int x);
};
Graph::Graph(int x){
	siz=x;
	arr=new list<int>[siz];
}
void Graph::BFS(int x){
	bool *visited=new bool[siz];
	for(int i=0; i<siz; i++) visited[i]=false;
	visited[x]=true;
	list<int> que;
	que.push_back(x);
	list<int>::iterator it;
	while(! que.empty()){
		maxi=max(maxi,x=que.front());
		que.pop_front();
		for(it=arr[x].begin(); it!=arr[x].end(); it++){
			if(! visited[*it]){
				visited[*it]=true;
				que.push_back(*it);
			}
		}
	}
}
void Graph::addEdge(int x, int y){
	arr[x].push_back(y);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	Graph g(4); 
    	g.addEdge(0, 1);
    	g.addEdge(0, 2);
    	g.addEdge(1, 2);
    	g.addEdge(2, 0);
    	g.addEdge(2, 3);
    	g.addEdge(3, 3);
	g.BFS(2);
	cout << g.maxi << '\n';
	return 0;
}