// url:https://leetcode.com/problems/palindrome-number/

#include <iostream>
#include <string>

using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string convertedX, reversedX;
        convertedX = to_string(x);
        reversedX = convertedX;
        reverse(reversedX.begin(),reversedX.end());

        if (convertedX == reversedX) {
            return 1;
        }
        else {
            return 0;
        }

        
    }
};


int main()
{
    Solution obj;
   // int num = 121;
   // int num = -121;
   // int num = 10;
    int num = 1221;


    cout << obj.isPalindrome(num);

    return 0;
}
