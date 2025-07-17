class Solution {
  public:
    int findMaxSum(vector<int>& arr) {
        if(arr.empty()) return 0;
        if(arr.size()==1) return arr[0];
        
        int p1=0;
        int p2=0;
        for(auto i:arr){
            int curr=max(p1,p2+i);
            p2=p1;
            p1=curr;
        }
        return p1;
    }
};