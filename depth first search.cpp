#include<iostream>
using namespace std;
struct graph
{
 int v;
 int e;
 int adj[100][100];
};
void adjmatrix(graph *g, int v, int e)
{
 for(int i = 0; i < v; i++)
 {
 for(int j = 0; j < v; j++)
 {
 g->adj[i][j] = 0;
 }
 }
 int val1,val2;
 for(int i=0;i<e;i++)
 {
 cout<<"which two vertices you want to join: ";
 cin>>val1;
 cin>>val2;
 g->adj[val1][val2]=1;
 g->adj[val2][val1]=1;
 }
 for(int i = 0; i < v; i++)
 {
 for(int j = 0; j < v; j++)
 {
 cout << g->adj[i][j] << " ";
 }
 cout << endl;
 }
}
void dfs(graph *g,int u,int v,int *vis)
{
 vis[u]=1;
 cout<<u;
 for(int i=0;i<g->v;i++)
 {
 if(vis[i]==0 &&g->adj[u][i]==1)
 {
 dfs(g,i,v,vis);
 }
 }
}
void dfstraversal(graph *g,int v)
{
 int *vis=new int;
 for(int i=0;i<g->v;i++)
 {
 vis[i]=0;
 }
 for(int i=0;i<g->v;i++)
 {
 if(vis[i]==0)
 {
 dfs(g,i,v,vis);
 }
 }
}
int main()
{
 graph *g = new graph;
 g->v=6;
 adjmatrix(g, 4, 5);
 dfstraversal(g,4);
 delete g; // Deallocate memory
}
