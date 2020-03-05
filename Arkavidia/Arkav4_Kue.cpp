#include <bits/stdc++.h>
using namespace std;

int main () {
	long long int a, jum=0, N, curr;
	long long int Min = INT_MAX;
	int T;
	
	cin >> T;
	
	while(T>0) {
		Min = INT_MAX;
		jum = 0;
		cin >> N;
		curr = N;
		while(N>0) {
			cin >> a;
			jum += a;
			if(Min > a) Min = a;
			N--;
		}
		cout << jum - (curr*Min) << endl;
		T--;
	}
}
