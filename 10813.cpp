#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m, a, b, tmp;
    cin >> n >> m;
    vector<int> vec(n+1);
    for(int i = 1; i<=n; i++){
        vec[i] = i;
    }
    for(int i = 0; i<m; i++){
        cin >> a >> b;
        tmp = vec[a];
        vec[a] = vec[b];
        vec[b] = tmp;
    }
    for(int i = 1; i<=n; i++){
        cout << vec[i] << " ";
    }
}