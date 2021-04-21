
#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        auto size = strs.size();

        if (size == 0)
        {
            return "";
        }

        if (size == 1) {
            return *(strs.begin());
        }

        if (size == 2)
        {
            auto begin = strs.begin();
            auto str1 = *begin;
            auto str2 = *(++begin);
            // cout << str1 << str2 << endl;

            string out = "";

            for (int i = 0; i < min(str1.size(), str2.size()); ++i)
            {
                if (str1[i] == str2[i])
                {
                    out += str1[i];
                }
                else
                {
                    break;
                }
            }
            // cout << out << endl;

            return out;
        }

        auto begin = strs.begin();
        auto str1 = *begin;
        auto str2 = *(++begin);
        vector<string> a = {str1, str2};
        string str = longestCommonPrefix(a);
        vector<string> b = {};
        b.assign((++begin), strs.end());

        b.push_back(str);

        return longestCommonPrefix(b);
    }
};

int main()
{
    Solution s;

    vector<string> a = {"flower", "flow", "flight"};

    cout << s.longestCommonPrefix(a) << endl;
}