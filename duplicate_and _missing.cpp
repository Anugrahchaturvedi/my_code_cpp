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
   }
   cout<<"duplicate is " <<arr[i];
    cout<<"missing is " <<arr[i]+1;

   
}
int main()
{
    int arr[]={1,2,3,4,4,6,7};
  int n = sizeof(arr)/ sizeof(arr[0]);
    fun(arr,n);

    return 0;
}