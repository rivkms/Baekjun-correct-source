#include <iostream>

using namespace std;

long long C(int n, int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}

int main(){
    int t, n, m;
    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> n >> m;
        cout << C(m,n) << endl;
    }
    return 0;
}