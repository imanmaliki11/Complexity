#include <bits/stdc++.h>
//#include <stdint.h>

using namespace std;

unsigned long long int arr[200001];

int main () {
	unsigned long long int t, a, b, c, d, h;
	cin >> t;
	while(t>0) {
		t--;
		cin >> a;
		for(int i=0; i<a; i++) {
			cin >> arr[i];
		}
		
		cin >> b;
		while(b>0) {
			cin >> c >> d;
			h = arr[c-1];
			for(int i=c; i<d && h; i++){
				if((unsigned long long int)h < 256) {
					h = (unsigned char)h & (unsigned char) arr[i];
				} else if((unsigned long long int)h < 65536) {
					h = (unsigned short)h & (unsigned short)arr[i];
				} else if((unsigned long long int)h < 4294967296) {
					h = (unsigned int)h & (unsigned int)arr[i];
				} else {
					h = h & arr[i];
				}
				cout << "s";
			}
			cout << h << endl;
			b--;
		}
	}
}
