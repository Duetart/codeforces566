#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if(count(s.begin(), s.end(), 'B') * 2 == s.size()){
            cout<<"YES\n";}
        else{
            cout<<"NO\n";
        }        }
    }