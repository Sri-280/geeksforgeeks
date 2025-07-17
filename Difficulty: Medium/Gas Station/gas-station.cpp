/*You are required to complete this method*/
class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        // Your code here
        int curr=0, total=0,start=0;
        for(int i=0;i<gas.size();i++){
            int gain=gas[i]-cost[i];
            total+=gain;
            curr+=gain;
            
            if(curr<0){
                start=i+1;
                curr=0;
            }
        }
        return (total>=0) ? start:-1;
    }
};
 