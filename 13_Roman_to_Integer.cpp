/**Roman to Integer
羅馬數字共有7個，即I（1）、V（5）、X（10）、L（50）、C（100）、D（500）和M（1000）。按照下述的規則可以表示任意正整數。需要注意的是罗马数字中没有“0”，與進位制無關。一般認為羅馬數字只用來記數，而不作演算。
重複數次：一個羅馬數字重複幾次，就表示這個數的幾倍。
右加左減：
在較大的羅馬數字的右邊記上較小的羅馬數字，表示大數字加小數字。
在較大的羅馬數字的左邊記上較小的羅馬數字，表示大數字减小數字。
左减的数字有限制，仅限于I、X、C。比如45不可以写成VL，只能是XLV
但是，左減時不可跨越一個位數。比如，99不可以用IC（100-1）表示，而是用XCIX（（100-10）+（10-1））表示。（等同於阿拉伯數字每位數字分別表示。）
左減數字必須為一位，比如8寫成VIII，而非IIX。
右加數字不可連續超過三位，比如14寫成XIV，而非XIIII。（見下方“數碼限制”一項。）
加線乘千：
在羅馬數字的上方加上一條橫線或者加上下標的Ⅿ，表示將這個數乘以1000，即是原數的1000倍。同理，如果上方有兩條橫線，即是原數的1000000（1000^2）倍。
數碼限制：
同一數碼最多只能出現三次，如40不可表示為XXXX，而要表示為XL。
代码如下：用map数据结构存储，键值对
**/
class Solution {
public:
int romanToInt(string s) {
int result=0;
map<char,int> roman;

roman['I']=1;
roman['V']=5;
roman['X']=10;
roman['L']=50;
roman['C']=100;
roman['D']=500;
roman['M']=1000;

for(int i=s.length()-1;i>=0;i--)
{
if(i==s.length()-1)
{
result=roman[s[i]];  //表示取出的最后一位罗马数
continue;
}
if(roman[s[i]] >= roman[s[i+1]])  //相邻比较，右加左减
result+=roman[s[i]];
else
result-=roman[s[i]];
}
return result;
}
};
