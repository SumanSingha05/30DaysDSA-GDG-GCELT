// Rotate an array to right by k steps.Take input the length of array,k and then the array.Print the rotated array.

#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; 
    vector<int> rotated(n);

    for (int i = 0; i < k; i++) {
        rotated[i] = arr[n - k + i];
    }

    for (int i = k; i < n; i++) {
        rotated[i] = arr[i - k];
    }

    for (int num : rotated) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rotateArray(arr, k);
    return 0;
}
