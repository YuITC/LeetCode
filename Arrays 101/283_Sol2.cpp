// Source 		: Leetcode problem 283: Move Zeros (https://leetcode.com/problems/move-zeroes/)
// Type	  		: Arrays
// Difficulty	: Easy
// Date   		: 10-24-2022

/***************************************************************************************************** 
 * Solution 2: Snowball Visualize | O(n)
 
 ******************************************************************************************************/

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int snowball = 0;
        
        for (int i = 0; i < nums.size(); i ++)
        {
            if      (nums[i] == 0) snowball ++;
            else if (snowball > 0)
            {
                nums[i-snowball] = nums[i];
                nums[i] = 0;
            }
        }
    }
};
