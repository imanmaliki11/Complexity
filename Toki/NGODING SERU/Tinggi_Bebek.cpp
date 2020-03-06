#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[3];
	for(int i=0; i<3; i++) cin >> arr[i];
	sort(arr, arr+3);
	
	cout << arr[0] << endl << arr[2] << endl << arr[1] << endl;
	
}
