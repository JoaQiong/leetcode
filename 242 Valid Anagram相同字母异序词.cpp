/*
Valid Anagram
由题意，判断两个字符串的组成字母是否一样（顺序不一样）
解题思路：
首先判断长度是否一致
再者，看每个字符串里各字母的数目是否相同，相同就返回true，代码如下：
*/
class Solution {
public:
bool isAnagram(string s, string t) {
int a[26]={0};
int b[26]={0};
int i,j,leg;
if(s.size()!=t.size()) return false;
leg=s.size();
for(i=0;i<leg;i++)
{
a[s[i]-'a']++;     //哈希思想的体现
b[t[i]-'a']++;
}
for(j=0;j<26;j++)
{
if(a[j]!=b[j]) {return false; break;}
}
if(j==26) return true;
}
};
