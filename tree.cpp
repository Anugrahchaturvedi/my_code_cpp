#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    };
int data(int data , int d2 , int d3);
// int print( struct node*ptr);
int main()
{
    data(5,7,8);
  
}

 

 int data(int data1 , int d2, int d3){
  node * temp = new node;
  temp->data = data ;
  temp->left->data=d2;
  temp->right->data=d3;
//   temp->right=temp->left=NULL;
cout <<"root is " <<temp->data <<endl;
cout <<"left is " <<temp->left->data <<endl;
cout <<"right is " <<temp->right->data <<endl;
 
 }
//   int print( struct node * ptr)
 
//  {
//       node*temp= new node ;
//       temp->data= ptr->data;
//       cout << temp->data <<endl;
//  }

