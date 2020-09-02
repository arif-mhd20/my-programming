
#include<iostream>
#include<list>

using namespace std;

enum visited{white,grey,black};

class Graph
{
	int numberOfNodes;
	list<int> *adj;
	visited *status;


public:
	Graph(int sizee)
    {
        this->numberOfNodes = sizee;
        adj = new list<int>[numberOfNodes];
        status = new visited[numberOfNodes];
    }
	void addEdge(int source, int destination)
    {
        adj[source].push_back(destination);
        status[source]=white;
    }

    void DFS(int source)
    {
        cout<<source<<endl;
        status[source]=grey;

        list<int>::iterator i;
        for (i = adj[source].begin(); i != adj[source].end(); ++i){
            if(status[*i]!=grey && status[*i]!=black) DFS(*i);
        }


        cout<<"Back track"<<source<<endl;
        status[source]=black;
    }
};










int main()
{

	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	g.DFS(0);

	return 0;
}
