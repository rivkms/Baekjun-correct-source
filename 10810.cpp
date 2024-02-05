#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m, a, b, c;
    cin >> n >> m;
    vector<int> vec(n);
    for(int i = 0; i<m; i++){
        cin >> a >> b>> c;
        for(int j = a-1; j<=b-1; j++){
            vec[j] = c;
        }
    }
    for(int i = 0; i<n; i++){
        cout << vec[i] << " ";
    }
    return 0;
}