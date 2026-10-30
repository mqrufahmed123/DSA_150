#include <bits/stdc++.h>
using namespace std;

vector<int> countDigits(int num){
    int count = 0;
    int sum = 0;
    while(num != 0){
        int digit = num%10;
        sum += digit;
        num = num / 10;
        count++;
    }
    return {count, sum};
}


int main(){
    int num = 100;
    vector<int> result = countDigits(num);
    cout << result[0] << " " << result[1];
}