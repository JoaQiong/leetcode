/*
Reverse String
思路：逆着遍历字符串，并存储到预先定义的一个空串s2中，而不是定义一个s2[leg],顺着去填充
代码如下：
*/
class Solution {
public:
string reverseString(string s) {
string s2="";
int leg;
leg=s.length();
if(leg==0||leg==1){
return s;
}
for(int i=leg-1;i>=0;i--)
{
s2+=s[i];
}
return s2;
}
};
