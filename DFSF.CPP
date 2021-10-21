#include<iostream.h>
#include<conio.h>
int a[20][20],reach[20],n;
void dfs(int v)
{
int i;
reach[v]=1;
for(i=1;i<=n;i++)
if(a[v][i] && !reach[i])
{
cout<<v<<"-->"<<i<<"\n";
dfs(i);
}
}
void main()
{
int i,j,count=0;
clrscr();
cout<<"\n Enter number of vertices:";
cin>>n;
for(i=1;i<=n;i++)
{
reach[i]=0;
for(j=1;j<=n;j++)
a[i][j]=0;
}
cout<<"Enter the adjacency matrix:\n";
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
cin>>a[i][j];
dfs(1);
cout<<"\n";
for(i=1;i<=n;i++)
{
if(reach[i])
count++;
}
if(count==n)
cout<<"\n Graph is connected";
else
cout<<"\n Graph is not connected";
getch();
}