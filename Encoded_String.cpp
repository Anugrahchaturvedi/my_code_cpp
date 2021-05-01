#include<bits/stdc++.h>
using namespace std ;
int convertBinaryToDecimal(long long  n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    cout  << char (decimalNumber + 'a');
    return 0 ;
}
int main()
{
    int t ;
    cin >>t ;
    while (t--)
    {
        int n ;
        cin >>n;
        string s ;
        cin >>s ;
        for (int i =0 ; i<n ; i+4)
        {
        string r = s.substr(i,i+4);
        int x = stoi(r);
        convertBinaryToDecimal(x);
        }
    }
    return 0 ;
}