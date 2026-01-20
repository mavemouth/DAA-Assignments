#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int& x : A) cin >> x;

    sort(A.begin(), A.end());
    int l = 0, ans = 0;
    for (int r = 0; r < n; r++) {
        while (A[r] - A[l] > 10) l++;
        ans = max(ans, r - l + 1);
    }
    cout << ans;
}
