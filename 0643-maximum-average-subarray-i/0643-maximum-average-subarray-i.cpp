#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        
        // Step 1: Find sum of first k elements
        double sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        
        double maxSum = sum;
        
        // Step 2: Sliding window
        for (int i = k; i < n; i++) {
            sum = sum + nums[i] - nums[i - k];
            maxSum = max(maxSum, sum);
        }
        
        // Step 3: Return average
        return maxSum / k;
    }
};