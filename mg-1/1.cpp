// https://www.hackerrank.com/challenges/restaurant/problem
#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b, c;
    cin >> a;

    while(a--) {
        cin >> b >> c;
        int gcd = __gcd(b,c);
        cout << (b*c) / (gcd*gcd) << endl;
    }
}
