#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;
        vector<long long> a(n), b(n);
        long long B = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i] / x; 
            B += b[i];
        }

        long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long cand = a[i] + (B - b[i]) * y;
            ans = max(ans, cand);
        }

        cout << ans << "\n";
    }
    return 0;
}
