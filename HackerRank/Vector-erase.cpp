#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//problem link : https://www.hackerrank.com/challenges/vector-erase/problem

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> arr;
    int a, b, c;
    cin >> a;
    while(a--) {
        cin >> b;
        arr.push_back(b);
    }  
    cin >> b;
    arr.erase(arr.begin()+(b-1));
    cin >> b >> c;
    arr.erase(arr.begin()+(b-1), arr.begin()+(c-1));

    cout << arr.size() << endl;
    for(auto it=arr.begin(); it!=arr.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
