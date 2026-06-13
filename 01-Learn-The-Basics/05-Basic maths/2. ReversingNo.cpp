#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,revnum=0;
    cin >> n;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        revnum=(revnum*10)+lastdigit;

    }
    cout << revnum;
}