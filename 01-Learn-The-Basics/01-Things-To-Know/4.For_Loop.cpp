#include<bits/stdc++.h>
using namespace std;

int main(){
    int low,high,sum=0;
    cout << "enter the value of low and high" << "\n";
    cin >> low ;
    cin >> high;
    
    for(int i=low;i<=high;i++){
     sum=sum+i;
    }
    cout << sum;
    return 0;
}