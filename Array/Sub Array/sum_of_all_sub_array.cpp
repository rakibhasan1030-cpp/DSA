
/* NUMBER OF SUBARRAY OF AN ARRAY WITH N ELEMENTS = n * (n+1) /2  */

#include<bits/stdc++.h>
using namespace std;

void sumOfAllSubArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            cout << sum << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    cout<<endl;
    cout<<"Enter value : " << endl;
    for (size_t i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    cout<<"Your array is : ";
    for (size_t i = 0; i < n; i++){
        cout<< arr[i] << "   ";
    }
    cout<<endl;
    cout<<endl;
    sumOfAllSubArray(arr, n);
}