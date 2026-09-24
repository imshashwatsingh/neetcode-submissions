class Solution {
public:
    bool isAnagram(string s, string t) {

        bool flag = true; // assume they are anagrams;

        int n1 = s.size();
        int n2 = t.size();

        // if sizes are not equal they are not anagrams, so return false;
        if(n1 != n2) return false; 

        //  store the values in an array

        vector<int> arr(26,0);

        // add all of string1 and string2 characters net count in arr
        for(int i = 0 ; i < n1 ;  i++ ){
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }

        // now check the final array , all values must be 0 for anagram
        for(int j = 0; j < 26 ; j++){
            if(arr[j] != 0){
                flag = false;
                return flag;
            }
        }

        return flag;        
    }
};
