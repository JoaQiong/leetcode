//开始以为是判断一个数是不是某个数的平方，写下如下代码，run code后发现它是要判断一个数是不是2的幂。
class Solution {
public:
bool isPowerOfTwo(int n) {
if(n<=0)
return false;
int m;
m=sqrt(n);
if(m*m==n)
return true;
else
return false;
}
};

发现后写出代码如下：
class Solution {
public:
bool isPowerOfTwo(int n) {
if(n<=0)
return false;
if(n==1||n==2)
return true;
while(n!=0)
{
if(n%2==1)
{
return false;
break;
}
else
{
n=n/2;
if(n==1)
{
return true;
break;
}
}
}
}
};
推荐采用位操作代码如下：
class Solution {
public:
bool isPowerOfTwo(int n) {
if(n<=0)
return false;
if(n==1)
return true;
int i;
int count=0;
for(i=0;i<32;i++)
{
if((n&(1<<i))>0) //这里1<<i表示1向左移i位，n无需转换成二进制数，
{                //默认自动转换
count++;
if(count>1)
{
return false;
break;
}
}
}
return true;
}
};


下面一题判断一个数是不是3的幂，代码类似如下：
class Solution {
public:
bool isPowerOfThree(int n) {
if(n<=0)
return false;
if(n==1||n==3)
return true;
while(n!=0)
{
if(n%3==1||n%3==2) //这里不仅取余剩1不行，剩2也不行，同理依次类推
{
return false;
break;
}
else
{
n=n/3;
if(n==3)
{
return true;
break;
}
}
}
}
};
