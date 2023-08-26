#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i=1; i<=n; i++) {
        result *= i;
    }
    return result;
}

int main(){
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if(n>0){
        int result = factorial(n);
        cout << "Factorial of " << n << " is " << result << endl;
    }else{
        cout << "Factorial is not defined for negative numbers." << endl;
    }

    return 0;
}
