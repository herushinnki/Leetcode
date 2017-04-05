class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        map<int,int>::iterator iter;
        vector<int> ans;
        for (int i=0;i<nums.size();i++)
            m[nums[i]]=i;
        for (int i=0;i<nums.size();i++)
        {
            int t=target-nums[i];
            iter=m.find(t);
            if (iter!=m.end())
            {
                if (i==(*iter).second) continue;
                ans.push_back(i);
                ans.push_back((*iter).second);
                break;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
