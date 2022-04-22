#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
    int res = 0;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++){
        res = res ^ arr[i];
    }
    cout << "Ans : " << res << endl;
    return 0;
}