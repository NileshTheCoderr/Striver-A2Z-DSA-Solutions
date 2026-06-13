#include <bits/stdc++.h>
using namespace std;

void f(int n,int i){
    if(n<i){
        return ;
    }
    cout << i <<" ";
    f(n,i+1);
}

int main(){
    int n,i=1;
    cin >> n;
    f(n,i);
}