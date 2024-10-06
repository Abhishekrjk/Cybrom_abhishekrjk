#include<math.h>
class Solution {
public:
    bool isHappy(int n) {
        while(n>1){
            if(ceil(log(n))==floor(log(n)) or n==7)
            {


                return true;}
            int s=0,t=n;
            while(t){
                s+=(t%10)*(t%10);
                t/=10;
            }
            if(s==58)
                return false;
            n=s;
        }
        return true;
    }
    return 0;
};
