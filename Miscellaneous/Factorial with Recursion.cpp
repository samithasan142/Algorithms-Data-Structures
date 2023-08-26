#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
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
