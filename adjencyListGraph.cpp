#include <iostream>
#include <vector>

using namespace std;

//  Funtion to add an edge in undirected Graph
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int n)
{
    for(int v=0; v<n; ++v)
    {
        cout<<"\nAdjacency list of vertex: "<<v
            <<"\nHead("<<v<<")";
        for(auto x : adj[v])
            cout<<"-->"<<x;
        cout<<endl;
    }
}

int main()
{
    int n=0,u,v;
    char choice ='y';
    
    cout<<"\nEnter the matrix size(n):  ";
    cin>>n;

    vector<int> adj[n];
    
    do{
        cout<<"\nEnter vertex(u,v): ";
        cin>>u>>v;
        addEdge(adj,u,v);

        cout<<"\nWant to enter more sets? (y/n): ";
        cin>>choice;
    }while(choice == 'y' || choice =='Y');
    
    cout<<"\n*************************************************************************"<<endl;
    cout<<"\t\t\t\tOUTPUT"<<"\n";
    cout<<"\n*************************************************************************"<<endl;
    printGraph(adj,n);
}