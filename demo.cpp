#include<bits/stdc++.h>
using namespace std ;
#define fo(i,n) for (int i = 0; i < n; i++)


int main()
{   
	int t;
	cin >> t;
   while (t--)
   {  
      
      int n , k;
      cin >>n>>k;
      int a[n];
      int sum =0;
	 
	fo(i,n)
	{
		cin >>a[i];
	}

     fo(i,n)
     	 sum  = sum + a[i];
     	
     
     if (sum % k ==0)
     	cout << "0"<<endl;
     else 
     	cout << "1"<<endl;
 }
 return 0;
}