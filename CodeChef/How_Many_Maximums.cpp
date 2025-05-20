#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,c=0;
    cin >> n;
    while(n--){
        int a;
        string s;
        cin >> a;
        cin >> s;
        for(int i=0;i<a-2;i++){
            if(s[i]=='0' && s[i+1]=='1') c++;
        }
        if(s[0]=='1') c++;
        if(s[a-2]=='0') c++;
        cout << c << endl;
        c=0;
    }
}