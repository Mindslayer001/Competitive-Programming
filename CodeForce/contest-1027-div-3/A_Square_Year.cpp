#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;        
        int res = sqrt(n);
        if (res * res == n and res > 0){
            cout << res -1 <<" " <<  1<< endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}