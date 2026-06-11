#include <bits/stdc++.h>
using namespace std;

void print11(int n){
    
    for(int i=0;i<n;i++){
        int value=0;
    if(i%2==0) value=1;
    for(int j=0;j<=i;j++){
      cout << value;
      value=1-value;
    }
    cout << "\n";
}
}

int main(){
    int n;
    cin >> n;
    print11(n);
    return 0;
}