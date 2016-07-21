/*
Contains Duplicate
由题意，判断一个数组里是否至少有两个数是重复的，若是返回True，若各不相同则返回False。这里我先将该数组排序，若存在两个（或以上）数重复，则它们必相邻。
代码如下：
*/
class Solution {
public:
bool containsDuplicate(vector<int>& nums) {
if(nums.size()==0||nums.size()==1) return false;
sort(nums.begin(),nums.end());
int i;
for(i=0;i<nums.size();i++)
{
if(nums[i]==nums[i+1])
{
return true;
break;
}

}
return false;
}
};

//最开始我忘了判断该数组是空数组或只有一个元素的情况了，第二次依旧忘，汗颜！导致提交错误。第三次依然忘了，都有两个数比较了，怎么能忘！！！！

//这里如果将nums.size()提出放到一个临时变量中，可以节省8ms
