#include<bits/stdc++.h>
using namespace std ;
const int N =1e7 +10;
long long arr[N];
int main()
{
   int n;
   cin >>n;
   int a[n];
   for (int i = 0; i < n; i++)
   {
      cin>>a[i];
      arr[a[i]]++;
   }
   int q ;
   cin >>q;
   while(q--)
{
    int x;
    cin >>x;
    cout << arr[x] <<endl;
}

   
}