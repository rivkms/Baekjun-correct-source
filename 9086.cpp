#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> s;
        cout << s.front() << s.back() << "\n";
    }
    return 0;
}