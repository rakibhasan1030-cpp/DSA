#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int key){
    for (size_t i = 0; i < size; i++)
    {
        if(key == arr[i]) return i;
    }
    
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
    int s;
    cout<<"Enter your search value : ";
    cin>>s;
    cout<< "Found your value at position : " << linearSearch(arr, n, s);
}