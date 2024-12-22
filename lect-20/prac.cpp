#include <iostream>
#include <vector>
using namespace std;

void twoSum(int arr[], int n, int target) {
    int sum;

    for (int i = 0; int i< n; i++) {

        for (int j = 0; j < n; j++) {

            if (i == j) {
                continue;
            }

            sum = arr[i] + arr[j];

            if (sum == target) {
                cout << "[" << i << "," << j << "]";
            }
        }
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    twoSum(arr, 5, 7);

    return 0;
}