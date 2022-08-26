// CU Coding - Test 01
// Name Abharan
// Roll No. 2010990013

// Print all repeated numbers with their frequency

#include <bits/stdc++.h>

using namespace std;

// Created Find Frequency function to find repeated numbers and their frequency
void findFreq(int* a, int n){
    unordered_map<int,int> hash;
    // logging frequency for the repeated numbers using unordered map
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    
    cout<<"repeated Number    frequency\n";
   // If the frequency for the given item in an array is more than 1 Printing number with the frequency
    for(auto it=hash.begin();it!=hash.end();it++)
    if(it->second>1)
    cout<<it->first<<"                  "<<it->second<<endl;
    
}

int main()
{
    //Taking input for length of the array
    int n;
    cout<<"enter array length\n";
    cin>>n;
    int* arr=(int*)(malloc(sizeof(int)*n));
    
    cout<<"input array elements...\n";
    // Taking input for array items
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Calling Find Freq function by passing the Inputed Array
    findFreq(arr,n);

    return 0;
}