#include <bits/stdc++.h>
using namespace std;

void f(int l,int r,int arr[]){
    if(l>=r){
        return;
    }
swap(arr[l],arr[r]);
f(l+1,r-1,arr);
}


int main(){
    int l,r,n=5;
int arr[n]={1,2,3,4,5};
f(0,n-1,arr);
for(int i=0;i<n;i++){
    cout << arr[i];
    
}
}