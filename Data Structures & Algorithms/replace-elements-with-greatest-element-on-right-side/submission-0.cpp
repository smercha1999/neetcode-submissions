class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = -1;
            for (int j = (i+1); j<arr.size(); j++) {
                arr[i] = max(arr[i], arr[j]);
            }
        }
        return arr;
    }
};