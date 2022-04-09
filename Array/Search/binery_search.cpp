
/* Time Complexity : O(logn) */

#include<bits/stdc++.h>
using namespace std;

int binerySearch(int arr[], int size, int key){
    int s = 0, e = size;
    while(s <= e){
        int mid = s + (e - s) / 2; /* to avoid integer overflow condition */ 
        if(arr[mid] == key) {
            return mid;
        }else if (arr[mid] > key){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    cout<<endl;
    cout<<"Enter value : (array must be sorted!)" << endl;
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