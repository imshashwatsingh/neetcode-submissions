class Solution {
   public:
    bool hasDuplicate(vector<int>& arr) {
        unordered_set<int> us;
        int n = arr.size();
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (us.find(arr[i]) == us.end()) {
                us.insert(arr[i]);
            } else {
                flag = true;
                return flag;
            }
        }
        return flag;
    }
};