// 1 2 3 4 | 9 10 13 | 17 20 
// 
// 3 + 4 + 3
// 
// 
// 3 4 6 10 12 12 

#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned int a, hs=0, l1=0, l2=0, idx1=1, idx2=2;
	cin >> a;
	unsigned int arr[a];
	
	for(int i=0; i<a; i++) {
		cin >> arr[i];
	}
	
	sort(arr, arr+a);
	for(int i=0; i<a-1; i++) {
		int bt = arr[i+1]-arr[i];
		if(bt > l1) {
			if(bt > l2) {
				l1 = l2;
				l2 = bt;
				idx1 = idx2;
				idx2 = i+1;
			} else {
				l1 = bt;
				idx1 = i+1;
			}
		}
	}
	cout << ( arr[(min(idx1, idx2)-1)] - arr[0] ) + ( arr[(max(idx1, idx2)-1)] - arr[min(idx1, idx2)] ) + (arr[a-1] - arr[(max(idx1, idx2))]) << endl;
	
}
