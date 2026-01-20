#include <bits/stdc++.h>
using namespace std;

int median(vector<int> v) {
    sort(v.begin(), v.end());
    return v[v.size() / 2];
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) cin >> x;

    while (a.size() > 2) {
        vector<int> meds;
        for (int i = 0; i + 2 < a.size(); i++) {
            meds.push_back(median({a[i], a[i+1], a[i+2]}));
        }
        int m = *min_element(meds.begin(), meds.end());
        a.erase(find(a.begin(), a.end(), m));
    }
    cout << a[0] + a[1];
}
