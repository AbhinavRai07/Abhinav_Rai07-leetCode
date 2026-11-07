class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = size(s); 
        char temp;
        int i,j;
        for(i=0,j=n-1;i<j;i++,j--){
            temp = s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
};