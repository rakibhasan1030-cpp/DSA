#include<bits/stdc++.h>
using namespace std;
int bitCount(int a, int b){
    int diff = (a ^ b);
    int c = 0;
    while(diff){
        c++;
        diff = (diff & (diff-1));    }
    return c;
}

int main(){
    int a, b;

    cout << "Enter A : ";
    cin>>a;

    cout << "Enter B : ";
    cin>>b;
    
    cout << "Change " << bitCount(a, b) << " bits to change " << a << " to " << b << endl;

    return 0;
}