#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string st, st2;
        cin >> st >> st2;
        int max = 0;
        vector<bool> arr(n);
        for (int j = 0; j < n; j++) {
            if (st2[j] == '1') {
                for (int i = j - 1; i <= j + 1; i++) {
                    if (i >= 0 and i < n) {
                        if (!arr[i]) {
                            if ((st[i] == '1' and i != j) or (st[i] == '0' and i == j)) {
                                arr[i] = 1;
                                max++;
                                break;}}}}}}
        cout << max<<endl;}} 
