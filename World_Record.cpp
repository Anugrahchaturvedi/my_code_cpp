#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int t ;
	cin >>t ;
	while (t--)
	{
		float k1,k2,k3,v,temp;
		cin >>k1>>k2>>k3>>v;
        temp= k1*k2*k3*v;
           temp= 100/temp;

           temp= int((temp*100)+.5);
           temp=temp/100;
           cout << temp<<endl;
           if (temp>9.58)
           {	cout <<"NO"<<endl;}
           else if (temp<9.58)
          { 	cout<<"YES"<<endl;}
           else if (temp==9.57)
           	cout <<"NO"<<endl;
     }
}