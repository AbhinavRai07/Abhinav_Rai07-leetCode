class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;//similar kind of work just like array
        int x=left;
        int d=x;
        for(;d<=right;){
            x=d;
            while(x!=0){
            int a=x%10;
            if(a==0 || d%a!=0) break;//checking condition by dividing to d not x
            x=x/10;
            }
            if(x==0) ans.push_back(d);
            d=d+1;
        }
        return ans;
    }
};