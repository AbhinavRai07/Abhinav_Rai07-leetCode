class Solution {
public:
    int bitwiseComplement(int n) {
        int ans = 0;
 int i=0;
 if(n!=0){
 while(n!=0){
 int a=n%2;
 int b=a^1;
ans = (b*pow(2,i))+ans;
i++;
n=n/2;
}
return ans;
    }
else return 1;
    }
};