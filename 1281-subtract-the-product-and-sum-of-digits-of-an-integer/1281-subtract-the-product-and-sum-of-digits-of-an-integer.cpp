class Solution {
public:
    int subtractProductAndSum(int n) {
        int a,b;
        int sum=0;
        int product =1;
        while(n>0){
            a=n%10;
            sum=sum+a;
            product = product *a;
            n=n/10;
        }
        int difference = product -sum;
        cout<<difference;
        return difference;
    }
    };