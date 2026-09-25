class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        string first = strs[0];
        int longestPrefix = first.size();
        int numOfStrings = strs.size();
        for (int i = 1; i < numOfStrings; i++) {
            string current = strs[i];
            int currentPrefix = 0;
            for (int j = 0; j < current.size() && j < first.size(); j++) {
                if (current[j] == first[j]) {
                    currentPrefix++;
                }else {
                    break;
                }
            }
            longestPrefix = min(longestPrefix, currentPrefix);
        }

        return longestPrefix > 0 ? first.substr(0, longestPrefix) : "";
    }
};