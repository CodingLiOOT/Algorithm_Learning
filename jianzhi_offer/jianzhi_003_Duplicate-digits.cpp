/*(找出数组中重复的数字。
在一个长度为 n 的数组 nums 里的所有数字都在 0～n - 1 的范围内。数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。
*/
#include <vector>
#include <unordered_map>
using namespace std;

//完美利用题设条件
class Solution1
{
public:
    int findRepeatNumber(vector<int> &nums)
    {
        int i = 0;
        while (i < nums.size())
        {
            if (nums[i] == i)
            {
                i++;
                continue;
            }
            if (nums[nums[i]] == nums[i])
            {
                return nums[i];
            }
            swap(nums[i], nums[nums[i]]);
        }
        return -1;
    }
};

//通用，使用unordered_map来判断
class Solution2
{
public:
    int findRepeatNumber(vector<int> &nums)
    {
        unordered_map<int, int> map;
        int i = 0;
        while (i < nums.size())
        {
            if (map.count(nums[i]))
            {
                return nums[i];
            }
            map[nums[i]] = i;
            i++;
        }
        return -1;
    }
};

//题解
class Solution3
{
public:
    int findRepeatNumber(vector<int> &nums)
    {
        unordered_map<int, bool> map;
        for (int num : nums)
        {
            if (map[num])
                return num;
            map[num] = true;
        }
        return -1;
    }
};
