/*Pascal's Triangle
     开始并不知道这是杨辉三角，也不了解它的规律，后来看到博客上如下描述：杨辉三角的特点是
     每一行的第一和最后一个元素是1，其它元素是上一行它左右两个元素之和。以[1,3,3,1]为例，
     下一行的中间元素就是[1+3,3+3,3+1]，也就是[1,3,3]和[3,3,1]对应数字求和。
     我们需要两个“指针”，因为下一行的数与上一行密切相关，代码如下：
     */
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret;
        if(numRows<=0){
            return ret;
        }
        vector<int> pre;
        pre.push_back(1);
        ret.push_back(pre);
        for(int i=1;i<numRows;i++){
            vector<int> v;
            v.push_back(1);
            for(int j=0;j<pre.size()-1;j++){
                v.push_back(pre[j]+pre[j+1]);
            }
            v.push_back(1);
            ret.push_back(v);
            pre=v;
        }
        return ret;
    }
};
