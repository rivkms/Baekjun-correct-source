#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s;
    vector<int> vec(26);
    int big = 0, flag = 0;
    cin >> s;
    for(int i =0; i<s.length(); i++){
        vec[toupper(s[i])-65]++;
    }
    for(int i = 1; i<26; i++){
        if(vec[i] > vec[big]){
            big = i;
            flag = 0;
        }
        else if(vec[i] == vec[big]){
            flag = 1;
        }
    }
    if(flag == 1){
        cout << "?";
    }
    else cout << char(big+65);

    return 0;
}