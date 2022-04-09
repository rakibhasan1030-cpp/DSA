#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Input : ";
    cin>>n;
    int b[32];
    int i = 0;
    while (n > 0)
    {
        b[i] = n % 2;
        n = n / 2;
        i++;
    }
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << b[j];
    return 0;
}