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

    /* SPIRAL PRINT */

    int top = 0, bottom = N-1, left = 0, right = M-1; /* this four variable are marking the boundary of our spiral movement */
    int direction = 0; /* Here, direction can be 0 (left to right), 1 (top to bottom), 2 (right to left) or 3 (bottom to top) */
    while(top <= bottom && left <= right){
        /* first condition : left o right */
        if (direction == 0){
            for(size_t i = left; i <= right; i++){
                cout << arr[top][i] << " ";
            }
            top += 1; /* shift the top one position down by inreasing its value */
        }
        /* second condition : top o bottom */
        else if(direction == 1){
            for (size_t i = top; i <= bottom; i++){
                cout << arr[i][right] << " ";
            }
            right -= 1; /* shift the right one left by decreasing its value */
        }
    }

}