#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, M;
    cout<< "Enter ROW for the MATRIX : ";
    cin>>N;
    cout<< "Enter COLUMN for the MATRIX : ";
    cin>>M;

    int arr[N][M];
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

    

}