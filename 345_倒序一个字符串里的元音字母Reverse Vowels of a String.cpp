/*
Reverse Vowels of a String
倒序一个字符串里的元音字母，这里用两个vector变量分别按序存储元音字母和元音字母按序
所在的位置，后来只要倒序一下元音字母即可，具体代码如下：
*/
class Solution {
public:
string reverseVowels(string s) {
int l;
vector<int> temp1,temp2;
l=s.size();
if(l==0||l==1){
 return s;
}
for(int i=0;i<l;i++){
 if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
		 temp1.push_back(s[i]);
		 temp2.push_back(i);
 }
}
int l1,l2,k;
l1=temp1.size();
l2=temp2.size();
k=0;
for(int j=l1-1;j>=0;j--){
for(;k<l2;){
		s[temp2[k]]=temp1[j];
		k++;
		break;
}
}
return s;
}
};
