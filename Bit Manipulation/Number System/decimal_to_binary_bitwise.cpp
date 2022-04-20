#include<bits/stdc++.h>
using namespace std;
string decimalToBinary(int n){
    string nStr;
    while(n){
        if (n & 1){
            nStr+='1';
        }else{
            nStr+='0';
        }
        n >>= 1;
    }
    reverse(nStr.begin(), nStr.end());
    return nStr;
}

int main(){
    int n;
    cout << "Enter your value : ";
    cin>>n;
    cout << "Binary of " << n << " is : " << decimalToBinary(n) << endl;
}