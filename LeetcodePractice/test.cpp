#include <bits/stdc++.h>
using namespace std;
vector <int> targetSum(vector <int> &a , int &target)
{
    int left = 0 , right = int(a.size()) - 1 , tempSum;
    while(left < right)
    {
        tempSum = a[left] + a[right];
        if(tempSum == target)
            return {left + 1 , right + 1};
        if(tempSum > target)
            right--;
        else
            left++;
    }
    return {-1 , -1};
}
int main()
{
    vector <int> a = {1 , 4 , 5 , 11 , 12};
    int target = 9;
    for(int &x : targetSum(a , target))
        cout << x << " ";
    cout << '\n';
}

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector< vector<int> > Vec;//<<,>> are operators.Hence use space for '< <' (vector inside vector)
        
        if(nums.size() < 3) return Vec;//if there is only 2 numbers return Empty vector
        
        sort(nums.begin(), nums.end());//sort given vector to apply 2 pointers method
        
        for(int i = 0; i < nums.size()-2; i++){                        
            if(i == 0 || nums[i-1] != nums[i]){
                //if i-1 and i th element are same-> if taken in loop may produce duplicate ans.So for same value only take it once
                int low = i+1, high = nums.size()-1, sum = -nums[i];
                
                while(low < high){//search like binary search
                    if(nums[low] + nums[high] == sum){
                        
                        Vec.push_back({nums[i], nums[low], nums[high]});
                        //avoid duplicate value.Take them once
                        while(low < high && nums[low] == nums[low+1]) low++;                                               
                        while(low < high && nums[high] == nums[high-1]) high--;
                        low++;
                        high--;
                      }
                      
                    else if(nums[low] + nums[high] < sum) low++;
                    else high--;//nums[low] + nums[high] > sum                    
                  }                
              }
          }
          return Vec;
      }
  };