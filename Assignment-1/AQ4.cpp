#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for (int& x : A) cin >> x;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = i; j < n; j++) {
            if (A[j] > A[i]) cnt++;
            if (cnt == k) {
                ans += A[i];
                break;
            }
            if (cnt > k) break;
        }
    }
    cout << ans;
}
