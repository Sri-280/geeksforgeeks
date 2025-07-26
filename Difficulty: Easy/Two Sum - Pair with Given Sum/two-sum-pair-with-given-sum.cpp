class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_set<int> s;
        for(auto i:arr){
            int c=target-i;
            if(s.count(c)){
                return true;
            }
            s.insert(i);
        }
        return false;
    }
};