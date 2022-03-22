#include<iostream.h>
#include <conio.h>
struct node
{
int data;
node *next;
};
node *h= NULL;
void create()
{
int element;
node *n,*t;
t=h;
while(1)
  {
  cout<<" \n Enter -999 to terminate : " ;
  cout<<"\n  Enter the element : ";
  cin>>element;
  if(element==-999)
  break;
  else
  n=new node;
  n->data=element;
  if(h==NULL)
  h=n;
  else
  t->next=n;
  t=n;
  t->next=NULL;
  }
}
void display()
{
node *t;
t=h;
while(t!=NULL)
{
cout<<t->data<<"\t";
t=t->next;}}
void addatbeg()
{
int element;
cout<< "\n  Enter the element  to be added at the begining:\t";
cin>>element;
node *n;
n=new node;
n->data=element;
n->next=h;
h=n;
}
void addafter()
{
int loc, element;
node *t,*n;
t=h;
cout<< "\n Enter the location: \t" ;
cin>>loc;
cout<<" \n Enter the element  to be added:\t";
cin>>element;
for(int i=0;i<loc;i++)
{
t=t->next;
}
n=new node;
n->data=element;
n->next=t->next;
t->next=n;
}
void del()
{
 int element;
 node *t,*old;
 cout<< "\n Enter the element  to be deleted:\t";
 cin>>element;
 t=h;
 while(t!=NULL)
 {
  if(t->data==element)
  {
   if(t==h)
   h=t->next;
   else
   old->next=t->next;
   delete t;
   return;
  }
 else
  {
  old=t;
  t=t->next;
  }
 }
 cout<<" Element: "<<element<< "\n not found \t";
}
void count()
{
node *t;
t=h;
int c=0;
while(t!=NULL)
{
t=t->next;
c++;
}
cout<<" \n The number of elements in the list : \n"<<c<<"\n";
}
 void main()
{
clrscr();
int choice;
cout<<"1) create a link list"<<endl;
cout<<"2) Display the link list "<<endl;
cout<<"3) add an element at the beginning "<<endl;
cout<<"4) add an element after the specified location "<<endl;
cout<<"5) Delete an element in the link list "<<endl;
cout<<"6) count the number of elements in the link list "<<endl;
cout<<"7) Exit"<<endl;
   do {
      cout<<"\n Enter choice: "<<endl;
      cin>>choice;
      switch(choice)
      {
	 case 1: create();
		 break;
	 case 2: display();
		 break;
	 case 3: addatbeg ();
		 break;
	 case 4: addafter();
		 break;
	 case 5: del();
		 break;
	 case 6: count();
		 break;
	 case 7: cout<<"Exit"<<endl;
		 break;
	 default:cout<<"Invalid Choice"<<endl;
      }//end of switch
   }while(choice!=7);
      getch();
}//end of main

