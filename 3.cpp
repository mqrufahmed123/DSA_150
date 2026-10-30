#include <bits/stdc++.h>
using namespace std;
bool palindrome(int t){
    long long rev = 0;
    int num = t;
    if(t < 0){
        return false;
    }
    while(num != 0){
        int digit = num%10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    return t == rev;
}
int main(){
    int num = 111;
    cout << palindrome(153)<<endl;
    cout << palindrome(111) << endl;
}