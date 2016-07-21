/*Pascal's Triangle II
这里只需返回一个杨辉三角给定行号的vector，受I启发，我们只需两个“指针”即可搞定。具体代码如下：
*/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> pre;
        if(rowIndex<0){              // 这里的行序号是可以为0的
            return pre;
        }
        pre.push_back(1);
        vector<int> cur;
        for(int i=1;i<=rowIndex;i++){       //注意这里给的是序号，一定要到该序号
            cur.clear();
            cur.push_back(1);
            for(int j=0;j<pre.size()-1;j++){
                cur.push_back(pre[j]+pre[j+1]);
            }
            cur.push_back(1);
            pre=cur;
        }
        return pre;
    }
};
