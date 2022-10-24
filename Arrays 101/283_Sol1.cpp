// Source 		: Leetcode problem 283: Move Zeros (https://leetcode.com/problems/move-zeroes/)
// Type	  		: Arrays
// Difficulty	: Easy
// Date   		: 10-24-2022

/***************************************************************************************************** 
 * Solution 1: Brute Force O(n^2)
 
 ******************************************************************************************************/

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        for (int i = 0; i < nums.size(); i ++)
        {
            if (nums[i] == 0)
                for (int j = i+1; j < nums.size(); j ++)
                {
                    if (nums[j] != 0)
                    {
                        swap (nums[i], nums[j]);
                        break;
                    }
                }
        }
    }
};
