class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set< vector<int> >s;
        //as no duplicate combination is allowed
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]+nums[k] == 0){
                        vector<int> v(3);
                        v[0]=nums[i];
                        v[1]=nums[j];
                        v[2]=nums[k];
                        sort(v.begin(),v.end());
                        s.insert(v);//insert in set
                    }
                }
            }
        }
        vector<vector<int>>v;
        for(auto i:s)
        {
            v.push_back(i);//copy vector to set
        }
        return v;       
        
    }
};