#include<bits/stdc++.h>
using namespace std;

/* Insert an element from unsorted array
   to its correct position in sorted array,
   here, correct position means 
   Left element < Middle element < Right element */
void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int curr = arr[i]; /* which element will go to its position */
        int j = i - 1; /* previous position of current element */
        while(arr[j] > curr && j >= 0){
            arr[j+1] = arr[j]; /* move ahed one position all elements, 
                                  till the current element is less than previous elements */
            j--;
        }
        arr[j+1] = curr; /* after while loop finished, the 'j' decrease to one position,
                            so j+1 is the currect position for current element */
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
    insertionSort(arr, n);
}