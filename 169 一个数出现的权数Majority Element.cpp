/*
Majority Element
由题意，思路同样是排序后判断某个数是否连续出现n/2向下取整次，这里向下取整函数是floor(表达式)、顺便介绍一下向上取整函数ceil(表达式)
代码如下：
*/
class Solution {
public:
int majorityElement(vector<int>& nums) {
int i,major;
sort(nums.begin(),nums.end());
major=floor(nums.size()/2);
for(i=0;i<nums.size();i++)
{
if(nums[i]==nums[i+major])
{
return nums[i];
break;
}
}

}
};
