//与Move Zeroes解题方法一致
class Solution {
public:
int removeElement(vector<int>& nums, int val) {
int n,count;
n=nums.size();
count=0;         //遍历vector
vector<int>::iterator it;
for(it=nums.begin();it!=nums.end();)
{
if(*it==val)
{
count++;
it=nums.erase(it);
}
else
it++;
}
return n-count;
}
};
