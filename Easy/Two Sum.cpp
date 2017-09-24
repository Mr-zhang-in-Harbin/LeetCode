class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int i, sum;  
        vector<int> results;  
        map<int, int> hmap;  
        for(i=0; i<nums.size(); i++){  
            if(!hmap.count(nums[i])){  
                hmap.insert(pair<int, int>(nums[i], i));  
            }  
            if(hmap.count(target-nums[i])){  
                int n=hmap[target-nums[i]];  
                if(n<i){  
                    results.push_back(n);  
                    results.push_back(i);  
                    //cout<<n+1<<", "<<i+1<<endl;  
                    return results;  
                }  
  
            }  
        }  
        return results;  
    }
};

