#include<bits/stdc++.h>
using namespace std ;
int main()
{
	int t ;
	cin >> t ;
	while (t--)
	{
		long long n,k,d;
		cin >> n >> k >> d;
		long long arr[n];

		for(int i =0 ; i<n ; i++)
		{
			cin >>arr[i];
			
		}
		int sum =0;

		for(int i =0 ; i<n ; i++)
		{
			sum +=arr[i];
			
		}
		int x ;
         x = sum / k ;
         if (x>d)
         	{cout << d <<endl;}
         else {cout << x <<endl;}

	}
	return 0 ;
}