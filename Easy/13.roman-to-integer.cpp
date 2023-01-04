/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start

#include <string>
#include <map>
#include <iostream>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
    int sum = 0;
    map<char, int> m = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int i = 0;
    int len = s.size();
    while(i < len)
    {
        if (i != len - 1)
        {
            if (m[s[i]] < m[s[i + 1]])
            {
                sum +=(m[s[i + 1]] - m[s[i]]);
                i += 2;
                continue;
            }
        }
        sum += m[s[i]];
        i++;
    }
    return (sum); 
    }
};


/*int main(void)
{
    Solution sol;

    int res = sol.romanToInt("III");
    std::cout << res << endl;
    int res2 = sol.romanToInt("LVIII");
    std::cout << res2 << endl;
    int res3 = sol.romanToInt("MCMXCIV");
    std::cout << res3 << endl;

    return 0;
}*/
// @lc code=end

