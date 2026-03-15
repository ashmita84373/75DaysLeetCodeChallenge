#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;

        // Mark visited numbers
        for(int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1;
            if(nums[index] > 0)
                nums[index] = -nums[index];
        }

        // Find missing numbers
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0)
                result.push_back(i + 1);
        }

        return result;
    }
};