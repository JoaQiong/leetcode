/*
Palindrome Number
判断给定的一个数是否为回文数，不能开辟更多的空间，开始没有思路，看了一下讨论里的思路，
需要反转该数，于是写出如下代码：
*/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||(x!=0&&x%10==0)){
            return false;
        }
        int temp=0;
        int flag;
        flag=x;
        while(x>=10){
            temp=10*temp+x%10;
            x=x/10;
        }
        return (temp*10+x==flag);
    }
};
//提交成功接收后，看了一下别人的解法，发现我这种做法可能会导致溢出，因为我是将除
//最高位外的后面所有数据进行反转，最后进行判断。别人的代码如下：
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||(x!=0&&x%10==0)){
            return false;
        }
        int ret=0;
        while(x>ret){        //相当于只判断了整数的一半（或加1位）
            temp=10*temp+x%10;
            x=x/10;
        }
        return ret==x||ret/10==x;   // 分别处理偶数和奇数的情况
    }
};
