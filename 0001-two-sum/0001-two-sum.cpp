class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
               int i = nums[0];
        int a,b;
        
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
           if(nums[i]+nums[j] == target){
               a=i;
               b=j;
            break;
              }
            }
        }
        return vector<int> {a,b};
    }
    
};