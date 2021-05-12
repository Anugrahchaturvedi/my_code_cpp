#include<bits/stdc++.h>
using namespace std;
 // print of vector
void printve(vector<int>&v) 
    {
        for(int i =0 ; i<v.size();i++)
        {
            cout << v[i] <<" ";
        }
    }
int main()
{


    // // input in the vector
    // vector<int>v;
    // int n ;
    // cin>>n;
    // for (int i=0 ; i<n; i++)
    // {
    //     int x;
    //     cin >>x ;
    //      v.push_back(x);  //it has time comp as O(1)
    //      }



        //  declaring vector of any fixed size 
        vector<int>arr(5); 
        // by default all values are zero but we can assign elements above the limit also
        
        arr[7]=5;
        cout << arr[7];
        // printve(arr);

        vector<int> temp(5,7);
        // it will crete the vector of size 5 and intalize the value with 7
        cout << temp[4] <<endl;
        temp.pop_back();  // it will remove element which is enter in vector at last
        printve(temp);
        vector<int>v2=temp; // it will create copy of temp as v2 it has time comp as O(n)
        printve(v2);
       
    
  

}