#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, mPtP=0, lP=-1, mT=0;
    cin >> n >> k;
    k--;
    int arr[n], nPositif[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
        if(arr[i]==1) {
            lP = i;
        } else {
            mPtP = max(mPtP, (i-lP));
            nPositif[i] = lP;
        }
    }

    if(mPtP > k*2){
        cout << "-1\n";
        return 0;
    }

    int idx = k;
    while(idx < n) {
        mT++;
        if(arr[idx] == 1) idx += ((k*2) + 1);
        else idx = nPositif[idx] + ((k*2) + 1);
    }

    if( idx-n < k) mT++;
    cout << mT << "\n";

    return 0;
}
