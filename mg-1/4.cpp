#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

ull val(ull s) {
    if(s<10) return s;
    ull sum = 0;
    while(s>0) {
        sum += s % 10;
        s = s/10;
    }
    return val(sum);
}

int main() {
    string st;
    ull sum = 0, k;
    cin >> st >> k;

    int i=0;
    while(st[i]) {
        sum += ( (ull)st[i] - (ull)'0' );
        i++;
    }

    cout << val(sum*k) << endl;
}

