#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int t, r;
    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> r >> s;
        for(int j = 0 ; j<s.length(); j++){
            for(int k = 0; k < r; k++){
                cout << s[j];
            }
        }
        cout << "\n";
    }

    return 0;
}