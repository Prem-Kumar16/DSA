#include<iostream.h>
#include<conio.h>
int a[10][10],visited[10],n;
void searchfrom(int k)
{
int i;
cout<<k<<" ";
visited[k]=1;
for(i=1;i<=n;i++)
	if (visited[i]==0)
		if (a[k][i]!=0)
		    searchfrom(i);
	return;
}
void main()
{
clrscr();
int i,j;
cout<<"\n Enter the number of nodes: \t";
cin>>n;
cout<<"\n Enter the elements of adjacency Matrix : \n";
for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	cin>>a[i][j];

for(i=1;i<=n;i++)
visited[i]=0;

cout<<"\n Depth First Path: \n";
for(i=1;i<=n;i++)
	if (visited[i]==0)
	searchfrom(i);
getch();
}