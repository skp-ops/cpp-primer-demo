/*
    Date:2024-12-21
    Title: FindFirstandLastPositionofElementinSortedArray.cpp
    Url: https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array/description/
    Description:
    给你一个按照非递减顺序排列的整数数组 nums，和一个目标值 target。请你找出给定目标值在数组中的开始位置和结束位置。

    如果数组中不存在目标值 target，返回 [-1, -1]。

    你必须设计并实现时间复杂度为 O(log n) 的算法解决此问题。


    示例 1：

    输入：nums = [5,7,7,8,8,10], target = 8
    输出：[3,4]
    示例 2：

    输入：nums = [5,7,7,8,8,10], target = 6
    输出：[-1,-1]
    示例 3：

    输入：nums = [], target = 0
    输出：[-1,-1]


    提示：

    0 <= nums.length <= 105
    -109 <= nums[i] <= 109
    nums 是一个非递减数组
    -109 <= target <= 109

    language: cpp
    {tag}:二分查找
*/

#include <vector>

using namespace std;

class Solution
{
public:
    int FindIndex(vector<int> &nums, int target)
    // 二分查找找最左边的下标
    {
        int left = 0, right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return left;
    }
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int l = FindIndex(nums, target);
        int r = FindIndex(nums, target + 1) - 1;  // 锁定右边界
        if ((l >= nums.size()) || (nums[l] != target))
        {
            return {-1, -1};
        }
        return {l, r};
    }
};