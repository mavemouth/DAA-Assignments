#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> x = {2,1};
    vector<int> y = {3,1};

    sort(x.rbegin(), x.rend());
    sort(y.rbegin(), y.rend());

    int h = 1, v = 1;
    long long cost = 0;
    int i=0, j=0;

    while(i<x.size() && j<y.size()) {
        if(x[i] > y[j]) {
            cost += x[i]*v;
            h++; i++;
        } else {
            cost += y[j]*h;
            v++; j++;
        }
    }

    while(i<x.size()) cost += x[i++]*v;
    while(j<y.size()) cost += y[j++]*h;

    cout << "Minimum cost = " << cost;
    return 0;
}
