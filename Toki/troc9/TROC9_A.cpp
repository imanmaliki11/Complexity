#include <bits/stdc++.h>
using namespace std;


int main () {
	int s =0;
	
	string a;
	cin >> a;
	
	int p = a.length();
	
	for(int i=0; i<p; i++) {
		if(a[i] == 'O') s++;
	}
	
	if(s==1) {
		cout << "Ya\n";
	} else {
		cout << "Tidak\n";
	}
}
