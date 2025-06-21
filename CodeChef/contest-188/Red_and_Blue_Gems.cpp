#include<bits/stdc++.h>
using namespace std;

int main() {
    int r,b,p,q;
    cin >> r >> b >> p >> q;
    cout << (r*p>b*q?r*p:b*q) <<endl;
    return 0;
}