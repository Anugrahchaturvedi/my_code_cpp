#include<bits/stdc++.h>
using namespace std ;

int maxsubarray(int arr[] , int size)
{
    long long sum =0;
    long long  maxi=INT_MIN;
    for (int i =0; i < size ; i++)
    {
        sum+=arr[i];
        maxi =max(maxi , sum);
        if(sum<0) sum=0;


    }
    cout << maxi;
    return maxi;
}
int main()
{
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int size= sizeof(arr)/sizeof(arr[0]);
    maxsubarray(arr,size);
}
