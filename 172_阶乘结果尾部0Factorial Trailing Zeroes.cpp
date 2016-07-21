/*
Factorial Trailing Zeroes
由题意，需要我们判断一个数的阶乘结果尾部有多少个0。分析可得，0是由2和5相乘所得的，
所以需要找阶乘展开式里的（2,5）的对数，又因为2肯定比5多，即只需找5的个数。又分为2种情况：
（1）如15=3*5（5、10、15）
（2）又如25=6*5（5、10、15、20、25（5*5））
所以给出的整数的阶乘结果尾部0的个数即为其含有5（包含其倍数）的个数，代码如下：
*/
class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
        while(n>=5){
            n=n/5;
            count+=n;
        }
        return count;
    }
};
