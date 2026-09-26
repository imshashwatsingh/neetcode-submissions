class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int k  = 0; // count of non-val values in arr
        int n = arr.size();
        int last = n-1;
        for(int i = 0 ; i <= last ; i++ ){ // why till last ? -> because our limit is also decresing because after last , we know all are use-less elements
            if(arr[i] != val){
                k++;
            }else{
               swap(arr[i],arr[last]);
               last--;
               i--;
            }
        }

        return k;
    } 
};