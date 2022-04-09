
/* Time Complexity : O(n) */

#include<bits/stdc++.h>
using namespace std;

int binerySearch(int arr[], int size, int key){
    int s = 0, e = size;

    return -1;
}

int main(){
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    cout<<endl;
    cout<<"Enter value : " << endl;
    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Your array is : ";
    for (size_t i = 0; i < n; i++)
    {
        cout<< arr[i] << "   ";
    }
    cout<<endl;
    int v;
    cout<<"Enter your search value : ";
    cin>>v;
    cout<< "Found your value at position : " << binerySearch(arr, n, v);
}