#include <bits/stdc++.h>
using namespace std;

int reverse(int& num){
    int rev = 0;
    int mul = 0;
    while(num!=0){
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num/10;  
    }
    return rev;
}

int main(){
    int num = 135;
    cout << reverse(num);
}