#include <iostream.h>
#include <conio.h>
struct node
{
   int data;
   node *next;
};
node* front = NULL;
node* rear = NULL;
node* t;
void insert()
{
  node *n;
  int element;
  cout<<"Enter the element to be inserted in queue : "<<endl;
  cin>>element;
  if (rear == NULL)
  {
    n=new node;
    n->data = element;
    n->next = NULL;
    rear=n;
    front = n;
   } 
  else 
  {
    n= new node;
    n->data = element;
    n->next = NULL;
    rear->next = n;
    rear = n;
   }
}
void del()
{
   t = front;
   if (front == NULL)
   {
      cout<<"Underflow"<<endl;
      return;
   }
   else
   {
      if (t->next != NULL)
      {
      t = t->next;
      cout<<"Element deleted from queue is : "<<front->data<<endl;
      front = t;
      } 
      else
      {
      cout<<"Element deleted from queue is : "<<front->data<<endl;
      front = NULL;
      rear = NULL;
      }
   }
}
void display() 
{
   t = front;
   if ((front == NULL) && (rear == NULL)) 
   {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are: ";
   while (t!= NULL) 
   {
      cout<<t->data<<" ";
      t = t->next;
   }
   cout<<endl;
}
void main()
{
   clrscr();
   int choice;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do 
   {
   cout<<"Enter your choice : "<<endl;
   cin>>choice;
   switch (choice) 
      {
      case 1: insert();
	      break;
      case 2: del();
	      break;
      case 3: display();
	      break;
      case 4: cout<<"Exit"<<endl;
	      break;
      default: cout<<"Invalid choice"<<endl;
      }
   } while(choice!=4);
   getch();
}
