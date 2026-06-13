#include <bits/stdc++.h>
using namespace std;

int fact(int n){
if(n<1){
    return 1;
}
return fact(n-1)*n;

}


int main(){
    int n,factorial;
    cin >> n;
    factorial=fact(n);
    cout << factorial;
}