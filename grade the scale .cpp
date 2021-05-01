#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int H,T;
	float C;
	while(t--)
	{
		cout << "enter the value";
	    cin>>H>>C>>T;
	    int f1=0,f2=0,f3=0;
	    if(H>50)
	    {
	        f1=1;
	    }
	    if(C<0.7)
	    {
	        f2=1;
	    }
	    if(T>5600)
	    {
	        f3=1;
	    }
	    if(f1==1 && f2==1 && f3==1)
	    {
	        cout<<10<<endl;
	    }
	    else if(f1==1 && f2==1)
	    {
	        cout<<9<<endl;
	    }
	    else if(f2==1 && f3==1)
	    {
	        cout<<8<<endl;
	    }
	    else if(f1==1 && f3==1)
	    {
	        cout<<7<<endl;
	    }
	    else if(f1==1 || f2==1 || f3==1)
	    {
	        cout<<6<<endl;
	    }
	    else
	    {
	        cout<<5<<endl;
	    }
	}
	return 0;
}
