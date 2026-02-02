#include <bits/stdc++.h>
using namespace std;

struct Item {
    int value, weight;
};

bool cmp(Item a, Item b) {
    return (double)a.value/a.weight > (double)b.value/b.weight;
}

int main() {
    int W = 50;
    vector<Item> items = {{100,20},{60,10},{120,40}};

    sort(items.begin(), items.end(), cmp);

    double totalValue = 0.0;

    for(auto &it : items) {
        if(W >= it.weight) {
            W -= it.weight;
            totalValue += it.value;
        } else {
            totalValue += it.value * ((double)W / it.weight);
            break;
        }
    }

    cout << "Maximum value = " << totalValue;
    return 0;
}
