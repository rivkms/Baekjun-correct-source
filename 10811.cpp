#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m, a, b;
	cin >> n >> m;

	vector<int> vec(n);
	for(int i = 0; i<n; i++){
		vec[i] = i+1;
	}
	for(int i = 0; i<m; i++){
		cin >> a >> b;
		reverse(vec.begin()-1+a, vec.begin()+b);
	}
	for(int i = 0; i<n; i++){
		cout << vec[i] << " ";
	}
	return 0;
}