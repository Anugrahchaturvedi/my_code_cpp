#include<bits/stdc++.h>
using namespace std;

int fun(int arr[] , int n )
{
    int i=0;
   sort(arr,arr+n);
   while (i<n-1)
   {
         if (arr[i]==arr[i+1])
        
         break;
         else
         i++;
   }
   cout<<"duplicate is " <<arr[i] << endl;
    cout<<"missing is " <<arr[i]+1 <<endl;

   return 0;
}

 int fun2(int arr[] , int n )
{ 
  int dup=0;
  int mis=0;
   int temp[n];
   for (int i = 0; i < n; i++)
   {
     temp[i]=0;
   }
   
   for(int i =0 ; i<n ; i++)
   {
    temp[arr[i]]= temp[i]+1;
   }
   for(int i =0 ; i<n ; i++)
   {
     if(temp[i]==0)
      cout << "yo" << i ;
      
     if(temp[i]>1)
      dup = temp[i];
   }
    cout<<"duplicate is " <<dup << endl;
    cout<<"missing is " <<mis <<endl;
}
int main()
{
    int arr[]={3,2,1,7,5,5,4};
  int n = sizeof(arr)/ sizeof(arr[0]);
    // fun(arr,n);
    fun2(arr,n);

    return 0;
}