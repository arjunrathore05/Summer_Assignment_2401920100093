class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>sq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int square=nums[i]*nums[i];
            sq.push_back(square);

        }
        sort(sq.begin(),sq.end());
        return sq;
    }
};
