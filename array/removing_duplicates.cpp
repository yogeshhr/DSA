//problem 26 - leetcode

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for(int j = 1; j<n; j++){
            if(nums[i] != nums[j]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
    }
};
int main(){
    vector<int> nums = {1,1,1,2,2,3};
    Solution obj;
    int result = obj.removeDuplicates(nums);
    for(auto it:nums){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"total different elements in array : "<<result<<endl;
}