//
//  BSClosestToleft283911B.cpp
//  BinarySearchTasks
//
//  Created by Nazia Zaman on 11/12/23.

//contest/283911/problem/B
//B. Closest to the Left
#include <iostream>
using namespace std;
int binarySearch(int* arr,int s,int e,int v)
{
    if(s>e) return 0;
    if(arr[e]<=v) return e+1;
    if(arr[s]>v) return s;
    int mid=s+(e-s)/2;
    if(arr[mid]==v&&arr[mid+1]>v) return mid+1;
    else if(arr[mid]>v)
    {
        return binarySearch(arr,s, mid-1, v);
    }
    return binarySearch(arr, mid+1,e, v);
}
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int v;
    for(int i=0;i<k;i++)
    {
        cin>>v;
        cout<<binarySearch(arr,0,n-1,v)<<endl;
    }
    return 0;
}

/**
 
 5 5
 3 3 5 8 9
 2 4 8 1 10

 6 5
 2 3 3 3 5 8
 2 3 4 8 1
 */

