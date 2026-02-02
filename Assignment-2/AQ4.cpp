#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};

    int total = 0, curr = 0, start = 0;

    for(int i=0;i<gas.size();i++) {
        total += gas[i] - cost[i];
        curr += gas[i] - cost[i];
        if(curr < 0) {
            start = i+1;
            curr = 0;
        }
    }

    cout << (total >= 0 ? start : -1);
    return 0;
}
