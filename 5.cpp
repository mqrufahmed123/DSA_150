#include <bits/stdc++.h>

using namespace std;

int GCD(int a, int b){
    while(b != 0){
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

long long findLCM(int a, int b){
    if(a == 0 || b == 0){
        return 0;
    }

    return abs((1LL * a / GCD(a, b)) * b);
}

int main(){
    cout << "";
    GCD(10, 12);
}
