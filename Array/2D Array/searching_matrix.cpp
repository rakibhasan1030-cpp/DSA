
#include<bits/stdc++.h>
using namespace std;
int main(){
    int row, col;
    cin>>row>>col;
    int arr[row][col];
    
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
    }
    

    return 0;
}