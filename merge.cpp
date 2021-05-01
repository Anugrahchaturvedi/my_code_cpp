#include<bits/stdc++.h>
using namespace std;

void marray(int a1[],int a2[], int n1 , int n2 )
{  int i =0 , j =0 ;
   while(i<n1)
   {
       if(a1[i]<a2[j])
       i++;
       else if (a1[i]>a2[j])
       {
           swap(a1[i],a2[j]);
           sort(a2,a2+n2);
        }
   }
   for (int i = 0 ; i< n1 ; i++)
   {
       cout <<a1[i];
   }
   cout << endl ;
   for (int j = 0 ; j< n2 ; j++)
   {
       cout <<a2[j];
   }
   
}
int main()
{ 
   int a1[]{ 1,4,7,8,10};
    int a2[]{2,3,9};
    int n1= ( (sizeof(a1)) / (sizeof(a1[0])));
    int n2= ( (sizeof(a2)) / (sizeof(a2[0])));
    marray(a1,a2,n1,n2);

    return 0;
}