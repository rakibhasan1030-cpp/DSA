#include<bits/stdc++.h>
using namespace std;

/* Find the minimum element in a unsorted array 
   and swap it with the element at begining */
void selectionSort(int arr[], int n){
    for (size_t i = 0; i < n-1; i++)
    {
        for (size_t j = i+1; j < n; j++)
        {
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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
    selectionSort(arr, n);
}