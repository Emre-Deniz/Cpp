// url:https://leetcode.com/problems/roman-to-integer/description/
/*

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.

*/

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int returnValue = 0;
        for (int i = 0; i < s.length(); i++) {
            switch (s.at(i))
            {
                
            case 'I':

                    if (i + 1 < s.length()) {
                        if (s.at(i + 1) == 'V') { returnValue += 4; i += 1; break;}
                        if (s.at(i + 1) == 'X') { returnValue += 9; i += 1; }
                    } else{ returnValue += 1; }                     
                     break;
                
            case 'V':
                returnValue += 5;
                break;
            case 'X':
                if (i + 1 < s.length()) {
                    if (s.at(i + 1) == 'L') { returnValue += 40; i += 1; break;}
                    if (s.at(i + 1) == 'C') { returnValue += 90; i+= 1;}                

                }else{ returnValue += 10; }                
                break;
            case 'L':
                returnValue += 50;
                break;
            case 'C':
                if (i + 1 < s.length()) {
                    if (s.at(i + 1) == 'D') { returnValue += 400; i += 1; break;}
                    if (s.at(i + 1) == 'M') { returnValue += 900; i += 1;}

                }else{ returnValue += 100; }
                break;
            case 'D':
                returnValue += 500;
                break;
            case 'M':
                returnValue += 1000;
                break;

            }

        }


        return returnValue;
    }




};


int main()
{
    Solution obj;
    //string s = "III"; //3
    //string s = "LVIII"; //58
    string s = "MCMXCIV"; //1994
    cout << obj.romanToInt(s);
    

    return 0;
}

