#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 6;
    vector<int> start = {1,3,0,5,8,5};
    vector<int> finish = {2,4,6,7,9,9};

    vector<pair<int,int>> activities;
    for(int i=0;i<n;i++)
        activities.push_back({finish[i], start[i]});

    sort(activities.begin(), activities.end());

    int count = 1;
    int lastFinish = activities[0].first;

    cout << "Selected activities:\n";
    cout << "(" << activities[0].second << "," << activities[0].first << ") ";

    for(int i=1;i<n;i++) {
        if(activities[i].second >= lastFinish) {
            count++;
            lastFinish = activities[i].first;
            cout << "(" << activities[i].second << "," << activities[i].first << ") ";
        }
    }

    cout << "\nMaximum number of activities = " << count;
    return 0;
}
