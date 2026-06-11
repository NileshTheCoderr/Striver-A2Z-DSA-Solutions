#include <bits/stdc++.h>
using namespace std;

void print18(int n){
for(int i=0;i<n;i++){
    char ch='E'-i;
    for(int j=0;j<=i;j++){
        cout << ch << " ";
        ch++;
    }
    cout << "\n";
}
}

int main(){
    int n;
    cin >> n;
    print18(n);
    return 0;
}