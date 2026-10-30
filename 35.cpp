#include <bits/stdc++.h>
using namespace std;

int equilibrium(vector<int>& arr){
    long long tsum = 0;
    long long lsum = 0;
    int n = arr.size();

    for(int ele : arr){
        tsum += ele;
    }
    for(int i = 0; i < n; i++){
        long long rsum = tsum - lsum - arr[i];
        if(rsum == lsum){
            return i;
        }
        lsum += arr[i];
    }
    return -1;
}


int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 3, 5, 2, 2};
    
    return 0;
}
