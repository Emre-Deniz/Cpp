//url:https://leetcode.com/problems/longest-common-prefix/


#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string> strs) {
        string answer; int minLength = 201; string shortest; int step = 0;
        for (string s : strs) {
            if (s.length() < minLength) { minLength = s.length(); shortest = s; }
        }
        for (int i = 0; i < minLength ; i++) {
            for (int j = 0; j < strs.size(); j++) {
                if (strs[j][i] != shortest[i]) { answer = shortest.substr(0, step); return answer; }
            }
            step += 1;
        }
        answer = shortest.substr(0, step);
        return answer;
    }
};

int main()
{
    Solution obj;
    //vector<string> strs = {"flower", "flow", "flight"};
    vector<string> strs = { "a" };
    cout << obj.longestCommonPrefix(strs);
}