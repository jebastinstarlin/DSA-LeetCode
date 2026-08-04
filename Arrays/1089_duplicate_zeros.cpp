#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> temp;

        for (int i = 0; i < arr.size(); i++) {
            temp.push_back(arr[i]);
            if (arr[i] == 0) {
                temp.push_back(0);
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            arr[i] = temp[i];
        }
    }
};

int main() {
    Solution obj;
    vector<int> arr = {1, 0, 2, 3, 0, 4, 5, 0};

    obj.duplicateZeros(arr);

    for (int x : arr)
        cout << x << " ";

    return 0;
}