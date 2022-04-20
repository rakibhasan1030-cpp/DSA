#include<bits/stdc++.h>
using namespace std;

void findTheBit(string b, int i){
    
}

string decimalToBinery(int n){
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
    int n, i;
    cout << "Enter your value(in decimal) : ";
    cin>>n;
    string nStr;
    nStr= decimalToBinery(n);

    cout << "Enter your bit position : ";
    cin>>i;
    findTheBit(nStr, i);
}