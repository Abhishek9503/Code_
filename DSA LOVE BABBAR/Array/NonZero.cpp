#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int nonZero = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] != 0)
            {
                swap(nums[j], nums[nonZero]);
                nonZero++;
            }
        }
    }
};

/*

Your input
[0,1,0,3,12]
Output
[1,3,12,0,0]
Expected
[1,3,12,0,0]

*/