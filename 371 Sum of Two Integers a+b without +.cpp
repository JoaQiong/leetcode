/*
Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -
这种涉及到+-\*\/运算符号的，很多都会需要用到位运算来进行转化。
*/

代码如下：
class Solution {
public:
    int getSum(int a, int b) {
        int sum=a;
        while(b!=0){
            sum=a^b;    //如果a,b每位都不相同，异或结果即为和
            b=(a&b)<<1; //找到相同位左移即保存了相同位的和
            a=sum;
        }
        return sum;
    }
};
