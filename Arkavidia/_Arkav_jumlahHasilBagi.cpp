#include <bits/stdc++.h>
using namespace std;

unsigned long long int arr[200000];

unsigned long long int mod(unsigned long long int i, unsigned long long int j) {
	unsigned long long int x = i / j;
	return i - (x * j);
}

int main () {
	int T;
	unsigned long long int N, Q, j, Qi, jum=0, max, temp;
	cin >> T;
	
	while(T>0) {
		T--;
		max = - 1;
		cin >> N >> Q;
		j = N;
		while(N>0) {
			N--;
			cin >> arr[N];
			if(max < arr[N]) max = arr[N];
		}
		
		while(Q>0) {
			Q--;
			jum = 0;
			cin >> Qi;
			if(Qi > max) {
				for(int i=0; i<j; i++) {
					jum += arr[i] * arr[i];
				}
			} else if(Qi == 1) {
				jum = 0;
			} else {
				for(int i=0; i<j; i++) {
					temp = mod(arr[i], Qi);
					jum += temp * temp;
				}
			}
		
			cout << jum << endl;
		
		}	
	}
}
