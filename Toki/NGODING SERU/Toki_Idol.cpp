#include <bits/stdc++.h>
using namespace std;

int main() {
	int nilai = 0, a;
	for(int i=0; i<3; i++) {
		cin >> a;
		nilai+=a;
	}
	
	if(nilai>200) cout << "Lolos\n";
	else cout << "Tidak Lolos\n";
	
}
