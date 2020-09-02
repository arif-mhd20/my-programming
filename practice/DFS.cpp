#include<iostream>
#include<vector>

using namespace std;

enum visited{white,grey,black};

struct node{
    int num;
    vector<int> adjacentNodes;
    visited status;
    int distance;
/*
    node(int n, vector<int> neigbors){
        num=n;
        adjacentNodes=neigbors;
        status=white;
    }
    */
};

vector<node> graph;

void DFS(vector<node> graph, int startPoint, int distance){

    if(graph[startPoint].status==black) {
        cout<<"At node: "<<graph[startPoint].num<<endl;
        cout<<"Black so returning\n";
    }
    if(graph[startPoint].status==white){
        cout<<"At node: "<<graph[startPoint].num<<endl;
      graph[startPoint].status = grey;
      graph[startPoint].distance = distance+1;
        cout<<"Made grey and distance is: "<<graph[startPoint].distance <<endl;
    }
    for(int i=0; i<graph[startPoint].adjacentNodes.size(); i++){
        cout<<"Entered loop\n";
        cout<<"Adjacent Node is: "<<graph[startPoint].adjacentNodes[i]<<endl;
        int adjacent = graph[startPoint].adjacentNodes[i];
        if(graph[adjacent].status!=black)
            DFS(graph, graph[startPoint].adjacentNodes[i], graph[startPoint].distance);
        cout<<endl;
    }
    graph[startPoint].status=black;
    cout<<"At node: "<<graph[startPoint].num<<endl;
    cout<<"Made black\n";

}


int main(){

    vector<int> adjacents0;
    adjacents0.push_back(1);
    node n0;
    n0.num=0;
    n0.adjacentNodes=adjacents0;
    graph.push_back(n0);

    vector<int> adjacents1;
    adjacents1.push_back(2);
    adjacents1.push_back(3);
    node n1;
    n1.num=1;
    n1.adjacentNodes=adjacents1;
    graph.push_back(n1);

    vector<int> adjacents2;
    adjacents2.push_back(4);
    node n2;
    n2.num=2;
    n2.adjacentNodes=adjacents2;
    graph.push_back(n2);

    vector<int> adjacents3;
    adjacents3.push_back(4);
    node n3;
    n3.num=3;
    n3.adjacentNodes=adjacents3;
    graph.push_back(n3);

    vector<int> adjacents4;
    adjacents4.push_back(5);
    node n4;
    n4.num=4;
    n4.adjacentNodes=adjacents4;
    graph.push_back(n4);

    vector<int> adjacents5;
    adjacents5.push_back(6);
    node n5;
    n5.num=5;
    n5.adjacentNodes=adjacents5;
    graph.push_back(n5);

    vector<int> adjacents6;
    node n6;
    n6.num=6;
    n6.adjacentNodes=adjacents6;
    graph.push_back(n6);


    DFS(graph,0,0);
    cout<<graph[0].distance;
}
