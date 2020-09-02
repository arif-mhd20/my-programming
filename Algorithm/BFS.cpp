
#include<iostream>
#include<list>
#include<queue>

using namespace std;

enum visited{white,grey,black};

class Graph
{
	int numberOfNodes;
	list<int> *adj;
	visited *status;
	queue<int> toVisit;


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

    string printStatus(visited s){
        if(s==white)return "White";
        else if(s==grey)return "Grey";
        else return "Black";
    }

    void BFSStart(int source){
        toVisit.push(source);
        BFS(source);
    }



    void BFS(int source)
    {
        cout<<"Visiting: "<<source<<endl;
        //cout<<"Source is now: "<<printStatus(status[source])<<endl;

        if(status[source]==white)
            toVisit.push(source);

        status[source]=black;


        while(!toVisit.empty()){
            list<int>::iterator i;
            for (i = adj[source].begin(); i != adj[source].end(); ++i){
                if(status[*i]==white){
                    //cout<<"Status is: "<<printStatus(status[*i])<<" Therefore pushing to queue"<<endl;
                    //cout<<"Push to queue: "<<*i<<endl;
                    toVisit.push(*i);
                    status[*i]=black;
                }

            }
            toVisit.pop();
            int nextSource = toVisit.front();
            BFS(nextSource);


        }
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

	g.BFS(0);

	return 0;
}
