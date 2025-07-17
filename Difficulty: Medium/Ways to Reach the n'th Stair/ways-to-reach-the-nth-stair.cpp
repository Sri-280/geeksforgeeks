class Solution {
  public:
    int countWays(int n) {
        if (n==1 || n==0) return n;
       int  curr=1,prev=1,next=0;
       for(int i=2;i<=n;i++){
           next=curr+prev;
           prev=curr;
           curr=next;
       }
        return next;
    }
};
