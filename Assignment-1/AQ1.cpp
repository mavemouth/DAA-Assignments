#include <bits/stdc++.h>
using namespace std;

bool canDivide(vector<int>& A, int M, int maxOR) {
    int cnt = 1, currOR = 0;
    for (int x : A) {
        if ((currOR | x) <= maxOR)
            currOR |= x;
        else {
            cnt++;
            currOR = x;
        }
    }
    return cnt <= M;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int& x : A) cin >> x;

    int lo = 0, hi = (1 << 30), ans = hi;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (canDivide(A, M, mid)) {
            ans = mid;
            hi = mid - 1;
        } else lo = mid + 1;
    }
    cout << ans;
}
