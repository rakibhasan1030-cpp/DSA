#include<bits/stdc++.h>
using namespace std;
const int M=3, N=3;

void linearSearch(int arr[N][M], int key){
    bool flag = false;
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            if(arr[i][j]  == key) flag = true;
        }
    }
    if(flag) cout << "Found!";
    else cout << "Not Found!";
}

int main(){

    int arr[N][M];
    cout<< "----- Enter value for 3X3 MATRIX -----" <<endl;
    cout << endl;
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            cout<< "Enter [" << i << j << "]-th element : ";
            cin>>arr[i][j];
        }
    }
    
    cout << endl;
    cout << "Your matrix is : " << endl;

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
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