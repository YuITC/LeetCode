// Source 		: Leetcode problem 283: Move Zeros (https://leetcode.com/problems/move-zeroes/)
// Type	  		: Arrays
// Difficulty	: Easy
// Date   		: 10-24-2022

/***************************************************************************************************** 
 * Solution 3: Two Pointers O(n)
 
 ******************************************************************************************************/

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int i = 0;
        
        for (int x : nums)  
            if (x != 0)
                nums[i ++] = x;
        
        while (i < nums.size()) 
            nums[i++] = 0;
    }
};
