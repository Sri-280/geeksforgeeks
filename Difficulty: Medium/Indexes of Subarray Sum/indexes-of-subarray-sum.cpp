class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
    vector<int> res;
    for(int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for(int j = i; j < arr.size(); j++) {
            sum += arr[j];
            if(sum == target) {
                res.push_back(i + 1);
                res.push_back(j + 1);
                return res;
            }
        }
    }
    return {-1};  
    }
};

