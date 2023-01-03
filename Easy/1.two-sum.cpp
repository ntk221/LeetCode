/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <vector>
#include <stdio.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        const int   len = nums.size();

        for(int i = 0; i < len; i++)
        {
            for (int j = i + 1; j < len; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    ans[0] = i;
                    ans[1] = j;
                    return (ans);
                }
            }
        }
        return ans;
    }
};

/*void test_twoSum(void)
{
    Solution sol;
    vector<int> nums1{2, 7, 11, 15};
    int         target1  = 9; 
    vector<int> ans1 = sol.twoSum(nums1, target1);
    for(int i = 0; i < ans1.size(); i++)
        printf("%d\n", ans1[i]);

    vector<int> nums2{3, 2, 4};
    int         target2 = 6;
    vector<int> ans2 = sol.twoSum(nums2, target2);
    for(int i = 0; i < ans2.size(); i++)
        printf("%d\n", ans2[i]);
}

int main(void)
{
    test_twoSum();
    return (0);
}*/
// @lc code=end

