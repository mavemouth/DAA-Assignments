#include <bits/stdc++.h>
using namespace std;

struct Job {
    char id;
    int dead, profit;
};

bool cmp(Job a, Job b) {
    return a.profit > b.profit;
}

int main() {
    vector<Job> jobs = {{'1',2,100},{'2',1,19},{'3',2,27},{'4',1,25},{'5',3,15}};
    sort(jobs.begin(), jobs.end(), cmp);

    int maxDead = 0;
    for(auto &j : jobs) maxDead = max(maxDead, j.dead);

    vector<int> slot(maxDead+1, -1);
    int profit = 0;

    for(int i=0;i<jobs.size();i++) {
        for(int j=jobs[i].dead;j>0;j--) {
            if(slot[j] == -1) {
                slot[j] = i;
                profit += jobs[i].profit;
                break;
            }
        }
    }

    cout << "Maximum Profit = " << profit;
    return 0;
}
