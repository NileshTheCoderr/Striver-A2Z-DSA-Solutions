#include <bits/stdc++.h>
using namespace std;
void f(int n,int sum){
    if(n<1){
    cout << sum ;
        return ;
    }
    f(n-1,sum+n);
    

}

int main(){
    int n,sum=0;
    cin >> n;
    f(n,sum) ;
    return 0;
  
}