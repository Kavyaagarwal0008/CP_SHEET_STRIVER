#include <bits/stdc++.h>
using namespace std;

static inline char pick_any_letter(int mask) {
    int bit = __builtin_ctz(mask);          // index of lowest set bit
    return char('a' + bit);
}

int main() {

    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<int> mask(n, 0);
        for (int j = 0; j < k; j++) {
            string s;
            cin >> s;
            for (int i = 0; i < n; i++) {
                mask[i] |= (1 << (s[i] - 'a'));
            }
        }

        // list divisors of n in increasing order
        vector<int> divs;
        for (int d = 1; 1LL * d * d <= n; d++) {
            if (n % d == 0) {
                divs.push_back(d);
                if (d != n / d) divs.push_back(n / d);
            }
        }
        sort(divs.begin(), divs.end());

        const int ALL = (1 << 26) - 1;

        for (int d : divs) {
            vector<int> inter(d, ALL);

            for (int i = 0; i < n; i++) {
                inter[i % d] &= mask[i];
            }

            bool ok = true;
            for (int r = 0; r < d; r++) {
                if (inter[r] == 0) { ok = false; break; }
            }
            if (!ok) continue;

            string t(d, 'a');
            for (int r = 0; r < d; r++) {
                t[r] = pick_any_letter(inter[r]);
            }

            string ans(n, 'a');
            for (int i = 0; i < n; i++) {
                ans[i] = t[i % d];
            }

            cout << ans << "\n";
            break;
        }
    }
    return 0;
}
