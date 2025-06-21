#include <bits/stdc++.h>
using namespace std;

int ceil_div(int a,int b){
    int n;
    n = a/b;
    if(n==0){
        return 1;
    }
    if(n*b == a){
        return n;
    }
    return n+1;
}


int main(){
    int t;
    cin >> t;
    while (t--){
        int n,m,k,nk,mk;
        cin >> n >> m >> k;
        nk = ceil_div(k,n);
        mk = ceil_div(k,m);
        if (k==0){
            cout << m*n <<endl;
        }
        else{
        cout << max((n-mk)*m,(m-nk)*n) <<endl;
        }
    }
}