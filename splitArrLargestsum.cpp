// Use of binary search:
class Solution {
public:
    int countSubarray(vector<int>& arr, int totalSum)
    {
        int n = arr.size();
        int sum = 0;
        int countArray = 1;

        for (int i = 0; i < n; i++)
        {
            if (sum + arr[i] > totalSum)
            {
                countArray++;
                sum = arr[i];
            }
            else
            {
                sum += arr[i];
            }
        }

        return countArray;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        long long high = accumulate(nums.begin(), nums.end(), 0LL);

        int mid;
        int ans = high;

        while (low <= high)
        {
            mid = low + (high - low) / 2;

            int count = countSubarray(nums, mid);

            if (count > k)
            {
                low = mid + 1;
            }
            else
            {
                ans = mid;
                high = mid - 1;
            }
        }

        return ans;
    }
};

