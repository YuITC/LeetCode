// Source 		: Leetcode problem 1051: Height Checker (https://leetcode.com/problems/height-checker/)
// Type	  		: Arrays
// Difficulty	: Easy
// Date   		: 10-24-2022

/***************************************************************************************************** 
 * Solution   : O(n * log(n))
 
 ******************************************************************************************************/

class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
        vector<int> expected = heights;
        
        sort(expected.begin(), expected.end());
        
        int diff = 0;
        for (int i = 0; i < heights.size(); i ++)
            if (heights[i] != expected[i]) 
                diff ++;
        
        return diff;
    }
};
