#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        set<char> s1;
        int m = 0;
        int len = 0;
        int i = 0, j = 0;
        while (i < s.length())
        {
            if (s1.count(s[i]))
            {
                while (s[j] != s[i])
                {
                    s1.erase(s[j]);
                    j++;
                }
                len = i - j;
                j++;
            }
            else
            {
                s1.insert(s[i]);
                len++;
                m = max(m, len);
            }
            i++;
        }
        cout << m;
        return m;
    }
};
int main()
{
    //return length of longest sub string -leetcode
    Solution ob;
    ob.lengthOfLongestSubstring("abcabbc");
}