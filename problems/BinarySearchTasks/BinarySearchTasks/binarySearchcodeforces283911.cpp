#include <iostream>
using namespace std;
bool binarySearch(int* arr,int s,int e,int v)
{
    if(s>e) return false;
    int mid=s+(e-s)/2;
    if(arr[mid]==v)
        return true;
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
        if(binarySearch(arr,0,n-1,v))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
