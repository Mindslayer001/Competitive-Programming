#include<bits/stdc++.h>
using namespace std;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n;cin >> n;
        int sum=0,flag=0;
        int temp;
        for(int i=0;i<n;i++){
            cin >> temp;
            sum+=temp;            
            if(sum%3==0){
                flag=1;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
        cout << "NO" << endl;
        }
    }
    return 0;
}