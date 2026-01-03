#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateRight(int arr[], int n, int k) {
        if (n == 0) return;

        k = k % n;

        int temp[k];
        for (int i = n - k; i < n; i++) {
            temp[i - n + k] = arr[i];
        }

        for (int i = n - k - 1; i >= 0; i--) {
            arr[i + k] = arr[i];
        }

        for (int i = 0; i < k; i++) {
            arr[i] = temp[i];
        }
    }

    void rotateLeft(int arr[], int n, int k) {
        if (n == 0) return;

        k = k % n;

        int temp[k];
        for (int i = 0; i < k; i++) {
            temp[i] = arr[i];
        }

        for (int i = k; i < n; i++) {
            arr[i - k] = arr[i];
        }

        for (int i = 0; i < k; i++) {
            arr[n - k + i] = temp[i];
        }
    }
};

int main() {
    Solution sol;

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    sol.rotateRight(arr, n, k);
    cout << "Array after right rotation by " << k << " steps:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    cout << "\n";

    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    sol.rotateLeft(arr2, n, k);
    cout << "Array after left rotation by " << k << " steps:\n";
    for (int i = 0; i < n; i++) cout << arr2[i] << " ";

    return 0;
}
