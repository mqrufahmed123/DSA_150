
#include <bits/stdc++.h>
using namespace std;

string reverseWords1(string s) {
    stringstream ss(s);
    string word;
    string result;

    while (ss >> word) {
        if (!result.empty()) {
            result = " " + result;
        }
        result = word + result;
    }

    return result;
}

string reverseWords2(string s){
    stringstream ss(s);
    string word;
    string result;

    while( ss >> word){
        if(!result.empty()){
            result = " " + result;
        }
    }
    return result;
}

string reverseWords(string s){
    stringstream ss(s);
    string word;
    string result;

    while(ss >> word){
        if(!result.empty()){
            result  = " " + result;
        }
        result = word + result;
    }
    return result;
}

string reverseWords3(string s){
    stringstream ss(s);
    string word;
    string result;

    while(ss >> word){
        if(!result.empty()){
            result = " " + result;
        }
    }
    return result;
}

int main() {
    string s = "the sky is blue";

    cout << reverseWords(s);
    return 0;
}
