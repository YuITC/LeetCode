// Source 		: Leetcode problem 27: Remove Element (https://leetcode.com/problems/remove-element/)
// Type	  		: Arrays
// Difficulty	: Easy
// Date   		: 10-24-2022

/***************************************************************************************************** 
 * Solution 1: Two Pointers | O(n)
 
 ******************************************************************************************************/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int cnt = 0;
        for (int x : nums)
        {
            if (x != val) nums[cnt++] = x;
        }
        
        return cnt;
    }
};
