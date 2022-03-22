#include <stdio.h>
#include<iostream.h>
#include <string.h>
#include<conio.h>

int n,a[10][10],visited[10];
int front = 1, rear = 1, q[10];

void bfs(int v);

void main()
{
	clrscr();
	int i,j;
	cout<<"\n Enter the number of nodes : ";
	cin>>n;
	cout<<"\n Enter the elements of adjacency Matrix : \n";
	for (i=1;i<=n;i++)
	     for (j=1;j<=n;j++)
		cin>>a[i][j];
	for (i=1;i<=n;i++)
	    { visited[i]=0;q[i]=0;}
	    cout<<"\n Breadth first path : \n";
	bfs(1);
	getch();
}

void bfs(int v) {

    // make vertex v visited
    visited[v] = 1;
    // enqueue vertex v
    q[rear] = v; // insert at rear
    rear++; // increment rear

    while (rear!=front) // condition for empty queue
    {
	// dequeue
	int u = q[front];
	cout<<u<<" ";
	front++;

	// check adjacent nodes from u
	int i = 1;
	for (i = 1; i <= n; i++) {
	    // if there is adjacent vertex enqueue it
	    if (!visited[i] && a[u][i]) {
		q[rear] = i;
		rear++;
		visited[i] = 1;
	    }
	}
    }
}
