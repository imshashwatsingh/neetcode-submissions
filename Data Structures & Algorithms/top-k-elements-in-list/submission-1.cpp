class Solution {
   public:
    // Freestanding comparison function for descending order
    static bool comparePairs(const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;  // '>' ensures descending order
    }

    vector<int> topKFrequent(vector<int>& arr, int k) {
        unordered_map<int, int> mpp;  // number : freq
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            mpp[arr[i]]++;
        }
        // 2. Copy all pairs from the map to a vector
        vector<pair<int, int>> temp(mpp.begin(), mpp.end());

        // 3. Sort using the freestanding comparison function
        sort(temp.begin(), temp.end(), comparePairs);

        // 4. Now select top k elements from the final vector-array
        vector<int> result(k);
        for (int i = 0; i < k; i++) {
            result[i] = temp[i].first;
        }

        return result;
    }
};
