class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        vector<int> res;
        set<int>s;
        for(int i : arr)
        {
            if(s.count(i)==1)
            {
                res.push_back(i);
            }
        else
        {
            s.insert(i);
        }
        }
        return res;
    }
};