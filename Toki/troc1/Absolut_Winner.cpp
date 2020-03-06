#include <iostream>

//Link : https://tlx.toki.id/problems/troc-1/A/

using namespace std;

int main () {
	bool aw = false;
	int a, b, c, t;
	cin >> a >> b >> c;
	
	if(a<b) {
		t=a; a=b; b=t;
	}
	if(b<c) {
		t=b; b=c; c=t;
		if(a<b){
			t=a; a=b; b=t;
		}
	}
	int d = b+c;
	
	while(a>0 && d>0) {
		a = a-4;
		d = d-3;
		if(d==0 && a==0) {
			aw = true;
		}
	}
	
	if(aw) cout <<"YA"<<endl;
	else cout <<"TIDAK"<<endl;
}
