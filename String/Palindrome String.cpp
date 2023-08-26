/* Leetcode Problem no: 2108 (Easy) */

/**
    Approach 1:
**/

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    int start = 0, end = s.size()-1;
    while(start < end){
        if(s[start] == s[end]){
            start++;
            end--;
        }
        else return false;
    }
    return true;
}

int main(){
    string s = "racecar";
    if(isPalindrome(s)){
        cout << s << " is a Palindrome";
    }
    else cout << s << " is not a Palindrome";
    return 0;
}

/*
    Time Complexity     : O(n)
    Space Complexity    : O(1)
*/


/**
    Approach 2:
**/

/*
#include<bits/stdc++.h>
using namespace std;

string isPalindrome(string s){
    string newStr = s;
    reverse(newStr.begin(), newStr.end());
    if(s == newStr){
        cout << s << " is a Palindrome";
    }
    else cout << s << " is not a Palindrome";
}

int main(){
    string s = "racecar";
    isPalindrome(s);

    return 0;
}
*/

/*
    Time Complexity     : O(n)
    Space Complexity    : O(n)
*/
