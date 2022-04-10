/* Question Link : https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff08/0000000000387171 */

#include<bits/stdc++.h>
using namespace std;

void recordBreaker(int arr[], int n){
    if (n == 1) return; /* Boundary cases */

    int ans = 0, mx = -1;
    for (size_t i = 0; i < n; i++)
    {
        if(arr[i] >mx && arr[i] > arr[i+1]){
            ans++;
        }
        mx = max(mx, arr[i]);
    }
    cout << ans << endl;
}

int main(){
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n+1];
    arr[n] = -1;
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
    recordBreaker(arr, n);
}
