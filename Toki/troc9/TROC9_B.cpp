#include <bits/stdc++.h>
using namespace std;


int main () {
	unsigned long long int a[3], j;
	cin >> a[0] >> a[1] >> a[2];
	
	j = a[0] + a[1] + a[2];
	
	for(int i=0; i<3; i++) {
		if(a[i] * 2 == j){
			cout <<"Tidak\n";
			return 0;
		}
	}
	
	
	
	sort(a, a+3);

	if(a[0] == a[1] && a[0]+1 == a[2]) cout << "Ya\n";
	else cout << "Tidak\n";
}
