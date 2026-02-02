#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {900,910,920,1100,1120};
    vector<int> dep = {940,1200,950,1130,1140};

    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());

    int plat = 1, result = 1;
    int i = 1, j = 0, n = arr.size();

    while(i < n && j < n) {
        if(arr[i] <= dep[j]) {
            plat++;
            i++;
        } else {
            plat--;
            j++;
        }
        result = max(result, plat);
    }

    cout << "Minimum platforms required = " << result;
    return 0;
}
