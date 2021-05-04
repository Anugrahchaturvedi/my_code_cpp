#include<bits/stdc++.h>
using namespace std ;

int xorleft(int arr[] , int size)
{ 
    int r=0;
    int temp[101]={};
    for (int i = 0; i < size; i++)

    {
        temp[arr[i]]++;
    }
     for (int i = 0; i < 100; i++)
     {
        r+=  temp[i] / 2 ;   
         }
         cout << r ;
 
}
int main()
{
    int arr[]={10, 20, 20, 10, 10, 30, 50, 10, 20};
    int size= sizeof(arr)/sizeof(arr[0]);
    xorleft(arr,size);
}