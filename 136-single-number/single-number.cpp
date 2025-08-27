// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int single = 0;
//         for(int i=0; i<nums.size(); i++){
//             single = single ^ nums[i];

//         }return single;
        
//     }
// };

class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       int ans=0;
	   for(auto x:nums)
	   ans^=x;
	   return ans;
    }
};