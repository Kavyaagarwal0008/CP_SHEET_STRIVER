#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());

    int meet = v[1];
    int distance = abs(v[0] - meet) + abs(v[1] - meet) + abs(v[2] - meet);

    cout << distance << endl;
    return 0;
}
