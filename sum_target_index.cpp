vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
               {
                   v.push_back(i);
                   v.push_back(m[target-nums[i]]);
                   return v;
               }
            else 
              m[nums[i]]=i;  
        }
        return v;
    }