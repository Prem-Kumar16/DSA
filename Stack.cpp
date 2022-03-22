#include <iostream.h>
#include <conio.h>
struct node
{
   int data;
   node *next;
};
node *top = NULL;
void push(int element)
{
   node *n;
   n= new node;
   n->data = element;
   n->next = top;
   top = n;
}
void pop()
{
   if(top==NULL)
      cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}
void display()
{
   node *t;
   if(top==NULL)
      cout<<"stack is empty";
   else {
      t=top;
      cout<<"Stack elements are: ";
      while (t!=NULL)
      {
	 cout<<t->data <<" ";
	 t=t->next;
      }
   }
   cout<<endl;
}
void main()
{
   clrscr();
   int choice, element;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do
   {
      cout<<"Enter choice: "<<endl;
      cin>>choice;
      switch(choice)
      {
       case 1:
	    {
	    cout<<"Enter value to be pushed:"<<endl;
	    cin>>element;
	    push(element);
	    break;
	    }
       case 2:
	    pop();
	    break;
       case 3:
	    display();
	    break;
       case 4:
	    cout<<"Exit"<<endl;
	    break;
       default:
	    cout<<"Invalid Choice"<<endl;
       }
   }while(choice!=4);
   getch();
}
