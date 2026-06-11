#include <bits/stdc++.h>
using namespace std;

void print13(int n){
    int count=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout << count << " ";
        count++;
    }
    cout << "\n";
}
}

int main(){
    int n;
    cin >> n;
    print13(n);
    return 0;
}