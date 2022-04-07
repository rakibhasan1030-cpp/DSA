#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    int ans = 0;
    
    cout << "Input : ";
    cin>>a;
    for(int i = 0; i < a.size(); i++){
        int x = (int)a[i] - 48;
        x == 1 ? ans += pow(2, i) : 0;
    }
    cout << "Decimal number of given decimal number(" << a << ") is : " << ans << endl; 

    return 0;
}