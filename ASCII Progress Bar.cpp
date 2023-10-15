#include <bits/stdc++.h>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	 
	double p;
	cin >> p;
	
	cout << "[";
	
	for(int i=0; i<int(p/10.0); ++i){         // Just take the Integer Quotient
		cout << "+";
	}
	for(int i=0; i<(10-(int(p/10.0))); ++i){   // Just subtract the Integer Quotient from 10
		cout << ".";
	}
	cout << "]" << " " << floor(p) << "%";     

	return 0;
}
