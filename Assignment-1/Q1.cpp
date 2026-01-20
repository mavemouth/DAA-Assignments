#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int target) {
    if (l > r) return -1;
    int mid = l + (r - l) / 2;
    if (arr[mid] == target) return mid;
    if (arr[mid] > target)
        return binarySearch(arr, l, mid - 1, target);
    return binarySearch(arr, mid + 1, r, target);
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10, target = 23;

    int idx = binarySearch(arr, 0, n - 1, target);
    if (idx != -1)
        cout << "Element found at index " << idx << endl;
    else
        cout << "Element not found" << endl;
}
