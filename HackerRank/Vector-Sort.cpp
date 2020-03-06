#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> arr;
    int a, n;
    cin >> n;
    while(n--) {
        cin >> a;
        arr.push_back(a);
    }

    sort(arr.begin(), arr.end());

    for(auto it=arr.begin(); it!=arr.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}
