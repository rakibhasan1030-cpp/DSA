#include<bits/stdc++.h>
using namespace std;
const int M=3, N=3;

void linearSearch(int arr[M][N], int key){
    bool flag = false;
    for (size_t i = 0; i < M; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            if(arr[M][N]  == key){
                flag = true;
            } 
        }
    }
    if(flag) {
        cout << "Found!";
    }else{
        cout << "Not Found!";
    } 
}

int main(){

    int arr[M][N];
    cout<< "----- Enter value for 3X3 MATRIX -----" <<endl;
    cout << endl;
    for (size_t i = 0; i < M; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            cout<< "Enter [" << i << j << "]-th element : ";
            cin>>arr[i][j];
        }
    }
    
    cout << endl;
    cout << "Your matrix is : " << endl;

    for (size_t i = 0; i < M; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            cout<<arr[i][j] << " ";
        }
        cout << endl;
    }

    int key;
    cout<< "Enter search value : ";
    cin>>key;

    linearSearch(arr, key);

    return 0;
} 