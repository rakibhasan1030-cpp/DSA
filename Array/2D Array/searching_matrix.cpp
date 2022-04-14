
#include<bits/stdc++.h>
using namespace std;
int main(){
    int row, col;
    cout<< "Input ROW and COLUMN number : ";
    cin>>row>>col;
    int arr[row][col];
    
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout<< "Enter [" << i << j << "]-th element : ";
            cin>>arr[i][j];
        }
    }
    
    cout << endl;
    cout << " Your matrix is : " << endl;

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout<<arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}