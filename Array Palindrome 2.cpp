#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int minMergeOperations(int arr[], int n) {
    int i = 0, j = n - 1;
    int mergeCount = 0;

    while (i < j) {
        if (arr[i] == arr[j]) {
            i++;
            j--;
        } else if (arr[i] < arr[j]) {
            arr[i + 1] += arr[i];
            i++;
            mergeCount++;
        } else {
            arr[j - 1] += arr[j];
            j--;
            mergeCount++;
        }
    }

    return mergeCount;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = minMergeOperations(arr, n);
    cout << result << endl;

    return 0;
}
