#include<bits/stdc++.h>
using namespace std ;
#define ll long long 
int main()
{
    ll n1,n2;
    cin >>n1>>n2;
    (n1>n2) ? cout << n1-n2 : cout << n2+n1;
    return 0;
}