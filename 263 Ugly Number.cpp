/*
Ugly Number
由题意，对于给定的一个数，判断它分解的质数因子是不是仅仅包括2、3、5，开始没有思路，
查找到网上的思路：可以试着用2、3、5不断整除n，当n不能再被2、3、5整除时，判断n是否等
于1，等于1则指定的数字是丑数（返回真），否则不是（返回假）。
代码如下：
*/
class Solution {
public:
bool isUgly(int num) {
if(num<=0)
{
return false;
}
while(num%2==0) num=num/2;
while(num%3==0) num=num/3;
while(num%5==0) num=num/5;
if(num==1)
{
return true;
}
else
{
return false;
}
} 
};
