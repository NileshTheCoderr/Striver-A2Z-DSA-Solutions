#include <bits/stdc++.h>
using namespace std;

void print22(int n){
int top,down,left,right;
for(int i=0;i<2*n-1;i++){
    for(int j=0;j<2*n-1;j++){
        top=i;
        down=(2*n-2)-i;
        left=j;
        right=(2*n-2)-j;
        cout << (n-min(min(top,down),min(right,left)));
    }
    cout << "\n";
}
}

int main(){
    int n;
    cin >> n;
    print22(n);
    return 0;
}