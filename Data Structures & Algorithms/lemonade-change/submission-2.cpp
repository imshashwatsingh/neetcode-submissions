class Solution {
   public:
    bool lemonadeChange(vector<int>& arr) {
        int n = arr.size();
        int five = 0;
        int ten = 0;
        for (int i = 0; i < n; i++) {
            int curr = arr[i];
            if (curr == 5) {
                five++;
            } else if (curr == 10 && five>0) {
                five--;
                ten++;
            } else {
                if (ten > 0 && five > 0) {
                    five--;
                    ten--;
                } else if (five >= 3) {
                    five = five - 3;
                } else {
                    return false;
                }
            }
        }
        return true;
    }

    // Logic
    //  Maintain five = 0 and ten = 0. 
    //  Iterate through bills: if bill is 5, increment five. If bill
    //  is 10, check if (five > 0) { five--; ten++; } else return false;
    //  If bill is 20, first check
    //  if ten > 0 && five > 0 (decrement both); otherwise check if five >= 3 (decrement five by 3);
    //  if neither condition holds, return false. Return true if you process all bills successfully.
};