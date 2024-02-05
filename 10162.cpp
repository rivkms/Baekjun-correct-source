#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec(3);
    int t;
    cin >> t;

    if(t%10) {
        cout << -1;
        return 0;
    }
    
    vec[0] = t/300;
    t%=300;
    vec[1]=t/60;
    t%=60;
    vec[2] = t/10;

    for(int i = 0; i<3; i++){
        cout << vec[i] << " ";
    }
    return 0;
}