#include <bits/stdc++.h>
using namespace std;

int main () {
	int T;
	cin >> T;
	unsigned long long int l, r, i, s, ux;
	
	while(T>0) {
		cin >> l >> r;
		
		i = l+1;
		
		if(r - l > 10) {
			
			s = l;
			if(s%2) {
				ux = (l+2) & 3;
				l = l ^ i;
				i++;
				l = l ^ i;
				for(i = r - 3; i<=r; i++) {
					if((i&3) == ux) s = l;
					else s = s ^ i;
				}
			} else {
				ux = (l+1) & 3;
				l = l ^ i;
				for(i = r - 3; i<=r; ) {
					if((i&3) == ux) s = l;
					else s = s ^ i;
					i++;
				}
			}
			cout << s << endl;
		} else {
			
			while(i <= r) {
				l = l ^ i;
				i++;
			}
		
			cout << l << endl;	
		}
		T--;
	}
}
