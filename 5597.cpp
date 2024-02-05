#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a;
    vector<bool> vec(30);
    for(int i = 0; i<28; i++){
        cin >> a;
        vec[a-1] = true;
    }
    for(int i = 0; i<30; i++){
        if(vec[i]==false){
            cout << i+1 <<" ";
        }
    }
    return 0;

}