class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int ans = arr[0];
        int count = 0;
        int n = arr.size();
        for(int i = 0; i < n ; i++){
            if(arr[i] == ans){
                count++;
            }else{
                if(count == 0){
                    ans = arr[i];
                    count++;
                }else{
                    count--;
                }
            }
        }
        int check = 0;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == ans)
                check++;
        }
        return check > n/2 ? ans : -1;

    }
};