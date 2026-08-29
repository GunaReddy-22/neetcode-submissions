class Solution {
public:
    vector<int> temp;

    void mergeSort(vector<int>& nums, int left, int right) {
        if (left >= right)
            return;

        int mid = left + (right - left) / 2;

        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);

        int i = left;
        int j = mid + 1;
        int k = left;

        
        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j])
                temp[k++] = nums[i++];
            else
                temp[k++] = nums[j++];
        }

        
        while (i <= mid)
            temp[k++] = nums[i++];

        
        while (j <= right)
            temp[k++] = nums[j++];

        
        for (int x = left; x <= right; x++)
            nums[x] = temp[x];
    }

    void sortColors(vector<int>& nums) {
        temp.resize(nums.size());

        mergeSort(nums, 0, nums.size() - 1);

        
    }
};