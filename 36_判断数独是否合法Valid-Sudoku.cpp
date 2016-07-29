/*
由题意，数独合法要求每行每列每块不重复出现1-9中的数，可以出现.，最简单的方法即每行每列
每块进行判断，但每次我们判断不用到行尾或列尾，于是采用map数据结构对其判断，及时终止for
循环，提交代码如下：
*/
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       int n;
       n=board.size();
       if(!isValidRow(board,n)) return false;
       if(!isValidColumn(board,n)) return false;
       if(!isValidBox(board,n)) return false;
       return true;
    }
    bool isValidRow(vector<vector<char>>& board,int n){
        map<char,int> m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='.') continue;
                if(m.find(board[i][j])==m.end()){
                    m[board[i][j]]=1;
                }else{
                    return false;
                }
            }
            m.clear();
        }
        return true;
    }
    bool isValidColumn(vector<vector<char>>& board,int n){
        map<char,int> m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[j][i]=='.') continue;
                if(m.find(board[j][i])==m.end()){
                    m[board[j][i]]=1;
                }else{
                    return false;
                }
            }
            m.clear();
        }
        return true;
    }
    bool isValidBox(vector<vector<char>>& board,int n){
        int flag=n/3;
        map<char,int> m;
        for(int i=0;i<flag;i++){
            for(int j=0;j<flag;j++){
                for(int p=0;p<3;p++){
                    for(int q=0;q<3;q++){
                        if(board[i*3+p][j*3+q]=='.') continue;
                        if(m.find(board[i*3+p][j*3+q])==m.end()){
                            m[board[i*3+p][j*3+q]]=1;
                        }else{
                            return false;
                        }
                }
                }
                m.clear();
            }
        }
        return true;
    }
};
