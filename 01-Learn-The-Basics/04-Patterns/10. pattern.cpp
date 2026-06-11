#include <bits/stdc++.h>
using namespace std;

void print10(int n){
for(int i=1;i<=2*n-1;i++){
    int stars;
    if(i>n) stars=2*n-i;
    else stars=i;
    for(int j=1;j<=stars;j++){
        cout << "*";
    }
    cout << "\n";
}

}

int main(){
    int n;
    cin >> n;
    print10(n);
    return 0;
}