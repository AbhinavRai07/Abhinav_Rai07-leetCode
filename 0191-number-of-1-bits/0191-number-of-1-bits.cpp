class Solution {
public:
    int hammingWeight(int n) {
        int a=0;
        while (n>0){
            int rem=n%2;
            if(rem==1){
                a=a+1;
            }
            n=n/2;
        }
        return a;
    }
};