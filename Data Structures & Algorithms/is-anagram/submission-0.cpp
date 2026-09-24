class Solution {
public:
    bool isAnagram(string s, string t) {

        int n1 = s.size();
        int n2 = t.size();

        if(n1 != n2) return false;

        vector<int> arr(26,0);

        for(int i = 0 ; i < n1 ; i++){
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--;
        }
        for(int i = 0 ; i < 26 ; i++){
            if(arr[i] != 0)
                return false;
        }
        return true;

    }
};
