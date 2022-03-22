#include<iostream.h>
#include<conio.h>
struct tree
{
int data;
tree *left,*right;
};
typedef struct tree *node;
node insert(int,node T);
node findmin(node T);
node findmax(node T);
//node del(int, node T);
void inorder(node T);
void preorder(node T);
void postorder(node T);
void main()
{
clrscr();
node T=NULL;
int element,number,n,i=0,min,max;
cout<<"\n Enter the number of elements in the tree : ";
cin>>n;
while(i<n)
{
cout<<"\n Enter the element: \t";
cin>>element;
T=insert(element,T);
i++;
}
cout<<"\n Inorder traversal \n";
inorder(T);
cout<<"\n Preorder traversal \n";
preorder(T);
cout<<"\n Postorder traversal \n";
postorder(T);
cout<<"\n Minimum value is : "<<findmin(T)->data;
cout<<"\n Maximum value is : "<<findmax(T)->data;
//cout<<"\n Enter the element to be deleted :   ";
//cin>>number;
//T=del(number,T);
//cout<<"\n after deletion :  ";
//inorder(T);
getch();
}
node insert(int X,node T)
{
tree *n;
if(T==NULL)
{
n=new tree;
n->data=X;
n->left=NULL;
n->right=NULL;
T=n;
}
else
{
 if(X<T->data)
	T->left=insert(X,T->left);
 else
	T->right=insert(X,T->right);
}
return T;
}
void inorder(node T)
{
if(T!=NULL)
 {
 inorder(T->left);
 cout<<"  "<<T->data;
 inorder(T->right);
 }
}
void preorder(node T)
{
if(T!=NULL)
 {
 cout<<"  "<<T->data;
 preorder(T->left);
 preorder(T->right);
 }
}
void postorder(node T)
{
if(T!=NULL)
 {
 postorder(T->left);
 postorder(T->right);
 cout<<"  "<<T->data;
 }
}
node findmin(node T)
{
if(T!=NULL)
while(T->left!=NULL)
T=T->left;
return T;
}
node findmax(node T)
{
if(T!=NULL)
while(T->right!=NULL)
T=T->right;
return T;
}
/*node del(int X, node T)
{
node p;
if(X<T->data)//traverse towards left
     T->left=del(X,T->left);
else
if(X>T->data)//traverse towards right
T->right=del(X,T->right);
// element found
else //two children
if(T->left!=NULL&&T->right!=NULL)
{//replace with the smallest data in right subtree
p=findmin(T->right);
T->data=p->data;
T->right=del(T->data,T->right);
}
else
{//one or zero child
p=T;
if(T->left==NULL)
T=T->right;
else if(T->right==NULL)
T=T->left;
   delete p;
}
 return T;
}*/
