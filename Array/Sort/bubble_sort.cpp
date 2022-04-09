
/* Time Complexity : O(n^2) */

#include<bits/stdc++.h>
using namespace std;

/* Repeatedly swap two adjacent elements 
   if they are in worng order 
   (Left element > Right element 
   then it'll be in wrong order) */
void bubbleSort(int arr[], int n){
    int c = 1; 
    while ( c < n ){
        for (size_t i = 0; i < n - c; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        c++;
    }

    cout<<endl;
    cout<<"Your sorted array is : ";
    for (size_t i = 0; i < n; i++)
    {
        cout<< arr[i] << "   ";
    }
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