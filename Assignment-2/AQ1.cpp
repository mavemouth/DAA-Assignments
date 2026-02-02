#include <bits/stdc++.h>
using namespace std;

struct Cust {
    int a, d, p;
};

bool cmp(Cust x, Cust y) {
    return x.d < y.d;
}

int main() {
    int K = 3;
    vector<Cust> c = {{1,4,1},{2,5,1},{3,6,2},{5,7,1},{4,8,2},{6,9,3}};
    sort(c.begin(), c.end(), cmp);

    vector<int> last(K+1, 0);
    int count = 0;

    for(auto &x : c) {
        if(x.a >= last[x.p]) {
            last[x.p] = x.d;
            count++;
        }
    }

    cout << "Maximum customers = " << count;
    return 0;
}
