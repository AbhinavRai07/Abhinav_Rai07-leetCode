class Solution {
public:
    bool canAliceWin(int n) {
       /* int temp=n; 
           for(int i=1,j=10;n!=0;i++,j--){
               n=n%j;
               if(i%2!=0 && temp==0) return true;
               temp=temp/j;
            }
        return false;*/
    
        int k=1,l=10;
        while(n>=0){
            n=n-l;
            k++;
            l--;
        }
        if(k%2==0 && k>1) return false;
        int i=1,j=10;
        while(n>0){
            n=n/j;
            i++;
            j--;
        }
        return i%2!=0;
    }
};