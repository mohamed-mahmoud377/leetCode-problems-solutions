class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
         int count =0;
        unordered_map<int ,int >map ;
        map.insert({nums.at(0),1});
        for (int i = 1; i<nums.size(); ++i) {
            if (map.find(nums.at(i))==map.end()){
                map.insert({nums.at(i),1});
            }else{
                count += map[nums.at(i)];
                map[nums.at(i)]+=1;

            }
        }


        return count;
    }
};