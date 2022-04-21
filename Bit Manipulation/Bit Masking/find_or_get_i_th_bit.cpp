#include<bits/stdc++.h>
using namespace std;

void findTheBit(int n, int i){
    if((n & (1 << i))){
        cout << "Your bit in " << i << " position is : 1" << endl;
    } else{
        cout << "Your bit in " << i << " position is : 0" << endl;
    }
}
int main(){
    int n, i;

    cout << "Enter your value(in decimal) : ";
    cin>>n;

    cout << "Enter your bit position : ";
    cin>>i;

    findTheBit(n, i);

    return 0;
}