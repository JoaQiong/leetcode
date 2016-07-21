/*
Excel Sheet Column Number
由题意，可得字母与数字的对应关系，并且周期是26，这里我们可以当其是一个26进制数，然后进行运算，如：ABCD=1*26^3+2*26^2+3*26^1+4，最后一个数交给return处理
代码如下：
*/
class Solution {
public:
int titleToNumber(string s) {
int leg,i,j;
int sum=0;
int l;
leg=s.length();
for(i=1;i<leg;i++)
{
l=1;
for(j=0;j<leg-i;j++)
{

			l=l*26;
}
l=l*(s[i-1]-'A'+1);
sum+=l;
}
return sum+s[leg-1]-'A'+1;
}
};


二次提交代码：
class Solution {
public:
int titleToNumber(string s) {
int ls,result=0;
ls=s.length();
int* p=new int [ls];            //使用new创建动态数组
for(int i=0;i<ls;i++){
p[i]=s[i]-'A'+1;
}
for(int j=0;j<ls;j++){
 int temp=power(26,ls-j-1);
 result+=p[j]*temp;
}
delete [] p;               //与new相对释放空间，加上这句时间减少4ms
return result;
}
int power(int n,int m){    //这里自己实现了一个乘方函数
int rs=1;
for(int i=0;i<m;i++){
 rs*=n;
}
return rs;
}
};
