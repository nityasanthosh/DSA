class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    //     if(nums.empty()) return {};
    //     vector<int> ans;
    //     for(int i = 0; i<nums.size(); i++){
    //         for(int j=i+1; j<nums.size(); j++){
    //             if(nums[i]!=nums[j]){
    //                 continue;
    //             }
    //             else{
    //                 ans.push_back(nums[i]);
    //                 break;    
    //             }
    //         }
    //     }return ans;
    // }

        if (nums.empty()) return {};
        vector<int>ans;
        unordered_map<int,int> m;
        for(int num:nums) 
            m[num]++ ;
        for(auto it: m) if(it.second==2) ans.push_back(it.first);
        return ans;

    }
};