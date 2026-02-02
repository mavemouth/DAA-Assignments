#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int,int>> courses = {{1,3},{2,5},{4,6},{6,7},{5,9},{8,10}};
    vector<pair<int,int>> plans = {{1,6},{2,7},{4,10}};

    sort(courses.begin(), courses.end());

    for(auto &p : plans) {
        int cnt = 0, last = -1;
        for(auto &c : courses) {
            if(c.first >= p.first && c.second <= p.second && c.first >= last) {
                cnt++;
                last = c.second;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
