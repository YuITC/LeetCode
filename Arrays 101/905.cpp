// Source 		: Leetcode problem 905: Move Zeros (https://leetcode.com/problems/sort-array-by-parity/)
// Type	  		: Arrays
// Difficulty	: Easy
// Date   		: 10-24-2022

/***************************************************************************************************** 
 * Solution   : Two Pointers | O(n)
 
 ******************************************************************************************************/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        int id = 0;
        
        for (int i = 0; i < nums.size(); i ++)
        {
            if (nums[i]%2 == 0)
                swap (nums[i], nums[id++]);        
        }

        return nums;
    }
};
