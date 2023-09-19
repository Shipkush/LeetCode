class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        int dup=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto i:mp)
        {
            if(i.second>1)
            {
                dup=i.first;
                break;
            }
        }
        return dup;
    }
};