#include <bits/stdc++.h>
using namespace std;

pair<int, int> fun(vector<int>& arr){
    int l = INT_MIN;
    int s = INT_MIN;
    int n = arr.size();

    for(int i = 0; i < n; i++){
        if(arr[i] > l){
            s = l;
            l = arr[i];
        }else if(arr[i] > s && arr[i] < l){
            s = arr[i];
        }
    }
    return {l,s};
}

int main(){ 
    vector<int> arr= {5, 6, 7 , 1, 2};
    auto ans = fun(arr);
    cout << ans.first << " " << ans.second;
}