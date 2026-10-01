class Solution {
   public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int left = 0;
        int right = n - 1;
        int boats = 0;
        sort(people.begin(), people.end());
        while (left <= right) {
            int totalWt = people[left] + people[right];
            if (totalWt <= limit) {
                left++;
                right--;
            } else {
                right--;
            }
            boats++;
        }
        return boats;
    }
};