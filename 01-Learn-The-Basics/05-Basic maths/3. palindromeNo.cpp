#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,copy,revnum=0;
    cin >> n;
copy=n;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        revnum=(revnum*10)+lastdigit;
    }
    if(revnum==copy){
        cout << "given number " << copy <<" is a palindrome";
    }
    else{
        cout << "given number " << copy << " is not a palindrome";
    }

}