#include<iostream.h>
#include<conio.h>
int a[10][10],n;
int front=1, rear=1, q[10];
void main()
{
clrscr();
int i,j,k;
int toposort[10],indegree[10];
cout<<"\n Enter the number of nodes : ";
cin>>n;
cout<<"\n Enter the adjacency matrix \n";
for (i=1;i<=n;i++)
     for (j=1;j<=n;j++)
	cin>>a[i][j];
//finding indegree of each node
for (i=1;i<=n;i++)
    indegree[i]= 0;
for (i=1;i<=n;i++)
  for (j=1;j<=n;j++)
    if (a[j][i] ==1)
     indegree[i]++;
for(i=1;i<=n;i++)
  if(indegree[i]==0)
  {q[rear]=i;rear++;}
cout<<"\n Topological sort: \n ";
while(front!=rear)
{
k=q[front];
front++;
cout<<k<<" ";//add node k to toposort array
//delete all edges going from node k
for(i=1;i<=n;i++)
{
   if(a[k][i]==1)
   {
      a[k][i]=0;
      indegree[i]=indegree[i]-1;
      if(indegree[i]==0)
      {q[rear]=i;rear++;}
   }
}
}
getch();
}




