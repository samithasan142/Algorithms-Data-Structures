#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    int num1=0, num2=1, nextTerm;
    if(n<=1){
        return n;
    }
    for(int i=2; i<=n; i++){
        nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
    }
    return nextTerm;
}

int main(){
    int n = 10;
    cout << "Fibonacci series: ";
    for (int i=0; i<=n; i++){
        cout << fib(i) << " ";
    }
    return 0;
}
