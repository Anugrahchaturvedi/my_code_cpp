#include<bits/stdc++.h>
using namespace std;
int main()
{
    // sytnax of pair is pair <type1, type2>name;
    pair<int , string >p; 
    p=make_pair(2,"abs");  /*one way to enter the value in pair*/
    cout << p.first <<p.second;
    p={3,"nan"}; /* other way to enter value in pair*/
     cout << p.first <<p.second;

  pair<int,string>p1=p; /* here another copy of is made whose value is similar to p*/
   pair<int,string>&p2=p;  /* here is p used as ref so any change made in p1 will also reflect in p */
   p2.first=5;
     cout << p.first <<p.second;

     int a[]={1,2,4};
     int b[]={2,5,6};


    //  it is generally used in scenario when you have to make relation between two array 
     pair<int,int>p_array[3];
     p_array[0]={1,2};
     p_array[1]={2,5};
     p_array[2]={4,6};
     swap(p_array[1],p_array[2]);
     for(int i =0 ; i<3;i++)
     {
        cout << p_array[i].first << p_array[i].second <<endl;
     }

}