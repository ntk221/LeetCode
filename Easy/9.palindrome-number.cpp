/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */
#include <vector>
#include <string>
#include <iostream>
using namespace std;

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x)
    {
        bool    flag = true;
        string  sx = to_string(x);
        int     len = sx.size();
        cout << sx << endl;

        if (x < 0)
            return false;
        if (len == 2)
            return (sx[0] == sx[1]);
        // cout << len / 2 + 1;
        for(int i = 0; i < len / 2; i++)
        {
            int j = len - 1 - i;
            if (sx[i] != sx[j])
                return (false);
        }
        return true;
    }
};

/*#include <assert.h>
void    test_isPalindrome(void)
{
    Solution sol;
    bool res1 = sol.isPalindrome(-121);
    assert(res1 == false);
    bool res2 = sol.isPalindrome(121);
    assert(res2 == true);
    bool res3 = sol.isPalindrome(0);
    assert(res3 == true);
    bool res4 = sol.isPalindrome(10);
    assert(res4 == false);
    bool res5 = sol.isPalindrome(1001);
    assert(res5 == true);

}

int main(void)
{
    test_isPalindrome();
}*/
// @lc code=end

