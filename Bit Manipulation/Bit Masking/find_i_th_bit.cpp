#include<bits/stdc++.h>
using namespace std;

void findTheBit(string b, int i){
    
}


void find(int n, int i){
    if((n & (1 << i))){
        cout << "Your bit in " << i << " position is : 1" << endl;
    } else{
        cout << "Your bit in " << i << " position is : 0" << endl;
    }
}

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
    cout <<"Binery number = " << nStr << "   |   " << "Size = " << nStr.size() << endl;
    return nStr;
}

int main(){
    int n, i;
    cout << "Enter your value(in decimal) : ";
    cin>>n;
    string nStr;
    nStr= decimalToBinary(n);

    cout << "Enter your bit position : ";
    cin>>i;
    // if((nStr.size() - 1) >= i){
    //     findTheBit(nStr, i);
    // }else{
    //     cout << "Your bit position is out of bound!";
    //     exit;
    // }

    find(n, i);
}