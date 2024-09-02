// url:https://leetcode.com/problems/two-sum/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target) {
        vector<int> resultvector;
        for (int i = 0; i<nums.size(); i++) {
            for (int j = i + 1; j < nums.size();j++) {
                if (nums.at(i) + nums.at(j) == target) {
                    resultvector.push_back(i);
                    resultvector.push_back(j);

                }

            }
        }
        cout << resultvector.at(0) << resultvector.at(1);
        return resultvector;
    }
};


int main()
{
    //vector<int> nums = {2, 7, 11, 15}; int target = 9;

    //vector<int> nums = { 3, 2, 4 }; int target = 6;

    vector<int>nums = { 3, 3 }; int target = 6;


    Solution testobj;
    testobj.twoSum(nums, target);
}

