/*
由题意可知，是一个很典型的二分查找问题，提交代码如下：
*/
// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int low=1;
        int high=n;
        int mid;
        int flag;
        while(low<=high){
            mid=(high+low)/2;
            flag=guess(mid);
            if(flag==0){
                return mid;
                break;
            }
            if(flag==-1){
                high=mid-1;
            }
            if(flag==1){
                low=mid+1;
            }
        }
        return -1;
    }
};
//提交过后出现超时错误，于是网上搜索发现mid的值应赋为(high-low)/2+low，改完提交AC了。
/*
继续搜索它们之间的区别，知乎有如下解释：
1首先第一种写法与第二种数学上得到的结果是完全一样的，这个可以通过取整函数的方法证明。
 但是beg＋end操作很可能会出现溢出的风险，但是后一种写法不会出现比end要大的中间数据，所以比较安全。
2你要是看c＋＋stl源码就会发现用的也是第二种，因为考虑了通用性，用第一种如果beg和end是指针或者
 迭代器的话是无法编译通过的，因为指针和迭代器运算不支持相加运算，却支持相减运算，所以第二种通用
 性强。
*/
