// Pascal's Triangle
// Problem link: https://toph.co/p/pascals-triangle

#include <bits/stdc++.h>
using namespace std;

int main() {
  // To reduce the runtime
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  
	int n;
	cin >> n;
	cout << (int)pow(2,(n-1)) << "\n";
	return 0;
}
