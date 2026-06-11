#include <bits/stdc++.h>
using namespace std;

void print20(int n){
for(int i=1;i<=n;i++){
    for(int j=0;j<i;j++){
        cout << "*";
    }
    for(int j=0;j<2*(n-i);j++){
        cout << " ";
    }
    for(int j=0;j<i;j++){
        cout << "*";
    }
    cout << "\n";
}
for(int i=1;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout << "*";
    }
    for(int j=0;j<2*i;j++){
        cout << " ";
    }
    for(int j=0;j<n-i;j++){
        cout << "*";
    }
    cout << "\n";
}
}

int main(){
    int n;
    cin >> n;
    print20(n);
    return 0;
}