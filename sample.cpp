#include<bits/stdc++.h>
using namespace std;



int equilibrium(int arr[] ,int n)
{ int lsum=0;
   int sum =0 ;
 
   if(n==1)
   return 1;
   else{
     for(int i=0 ; i< n ; i++)
     {sum+=arr[i];}

     for ( int i =0 ; i<n ; i++)
     {
        sum = sum - arr[i];
        if (lsum==sum)
        return i;
        lsum= lsum+arr[i];

     }
     return -1;
   }
}

int main()
{
    int arr[]={ 20 ,17, 42, 25, 32, 32, 30, 32, 37, 9 ,2, 33, 31, 17 ,14, 40, 9 ,12, 36, 21, 8 ,33, 6, 6, 10 ,37 ,12 ,26 ,21 ,3 };
    int n = sizeof(arr)/sizeof(arr[0]);
   cout << "equilliubrim is " << equilibrium(arr,n) <<endl;
}