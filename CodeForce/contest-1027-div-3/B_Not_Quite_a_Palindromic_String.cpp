#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        int zeros = 0, ones = 0;
        for(char c : s) {
            if(c == '0') zeros++;
            else ones++;
        }
        int total_pairs = n / 2;
        int bad_pairs = total_pairs - k;
        if(bad_pairs > min(zeros, ones)) {
            cout << "NO\n";
            continue;
        }
        int remaining_zeros = zeros - bad_pairs;
        int remaining_ones = ones - bad_pairs;
        int max_good_pairs = remaining_zeros/2 + remaining_ones/2;
        if(max_good_pairs >= k) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}