#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, a;
    cin >> n;
    vector<int> vec(201);
    for(int i = 0; i<n; i++){
        cin >> a;
        vec[a+100]++;
    }
    cin >> a;
    cout << vec[a+100];

    return 0;
}