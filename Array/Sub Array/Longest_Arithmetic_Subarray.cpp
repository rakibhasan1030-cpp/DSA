/* Question Link : https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff47/00000000003bf4ed#problem */

#include<bits/stdc++.h>
using namespace std;

void longestArithmaticSubArray(int arr[], int n){
    int ans = 2;
    int prevDiff = arr[1] - arr[0];
    int curr = 2;
    int j = 2;
    while (j < n)
    {
        if (prevDiff == arr[j] - arr[j-1]){
            curr++;
        }else{
            prevDiff = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans << endl;
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
    longestArithmaticSubArray(arr, n);
}
