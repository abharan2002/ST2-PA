// CU Coding - Test 01
// Name Abharan
// Roll No. 2010990013

// Print all the non repeated numbers in an array
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Taking input for length of the array
    int n;
    cin>>n;
    int arr[n];
    // Taking input for array items
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    unordered_map<int,int> m;
    // Checking for the Non repeated numbers in the array
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    // Printing the Non repeated numbers
    cout << "Non-repeated numbers are: ";
    for(auto i:m){
        if(i.second==1){
            cout<<i.first<<" ";
        }
    }

    return 0;
}