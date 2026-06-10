#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter your marks" << "\n";
    cin >> n;
    if(n>=90){
    cout << "grade A"; 
    }
    else if(n<90 && n>=70){
        cout << "grade B";
    }
    else if(n<70 && n>=50){
        cout << "grade C";
    }
    else if(n<50 && n>=35){
        cout << "grade D";
    }
    else{
        cout << "Fail";
    }
}