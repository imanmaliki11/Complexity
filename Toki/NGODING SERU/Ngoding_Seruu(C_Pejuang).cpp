#include <bits/stdc++.h>
using namespace std;

bool countSt(string s, int l) {
	int jhk = 0, b=0;
	for(int i=0; i<l; i++) {
		if(isdigit(s[i])) b++;
		else if(tolower(s[i]) == s[i]) jhk++;
		
		if(b && jhk>=3) return true;
	}
	
	return false;
}

int main() {
	int l=0;
	string st, sv="";
	while(cin >> st){
		int ls = st.length();
		if(st[ls-1] == '.') {
			ls--;
			st = st.substr(0, ls);
		}
		if(ls > l) {
			if( countSt(st, ls) ) {
				sv = st;
				l = ls;
			}
		}
	}
	
	if(l) {
		cout << sv << endl;
		cout << l << endl;
	}
	else cout << "NO\n";
	
}
