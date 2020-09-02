//Link  : https://leetcode.com/problems/ugly-number/
class Solution {
public:
    bool isUgly(int num) {
        int div=2;
        if (num <= 0) return 0;
        while(num > 0 && num >= div) {
            if(num % div == 0) {
                num/=div;
                if(div != 2 && div != 3 && div != 5) return 0;
            }
            else if(div <= 5) div++;
            else return 0;
        }
        return 1;
    }
};
