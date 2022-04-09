
/* Time Complexity : O(n^2) */

#include<bits/stdc++.h>
using namespace std;

/* Repeatedly swap two adjacent elements
   if they are in worng order */
void bubbleSort(int arr[], int n){

    
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
    bubbleSort(arr, n);
}