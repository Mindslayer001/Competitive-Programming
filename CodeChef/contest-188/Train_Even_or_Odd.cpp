#include<bits/stdc++.h>
using namespace std;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n;cin >> n;
        int odd=0,even=0;
        int t;
        for(int i=0;i<n;i++){
            cin >> t;
            if(i%2==0){
                even+=t;
            }else{
                odd+=t;
            }
        }
        cout << (even>odd?even:odd) <<endl;
    }
    return 0;
}