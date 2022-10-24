// Source 		: Leetcode problem 283: Move Zeros (https://leetcode.com/problems/move-zeroes/)
// Type	  		: Arrays
// Difficulty	: Easy
// Date   		: 10-24-2022

/***************************************************************************************************** 
 *
 * Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements. 
 * Note that you must do this in-place without making a copy of the array. 
 * 
 
 * Example 1:
 	* Input: nums = [0,1,0,3,12]
 	* Output: [1,3,12,0,0]
	
 * Example 2:
 	* Input: nums = [0]
 	* Output: [0]
 
 * Constraints:
 	* 1 <= nums.length <= 104
 	* -231 <= nums[i] <= 231 - 1
 ******************************************************************************************************/
// Solution 1: Brute Force O(n^2)

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
