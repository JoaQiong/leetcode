/*
Nim Game
由题意分析“我先下”可得如下表：
heaps	   takes	 remain	   Win or lose
1         	1      	0	        win
2         	2	      0	        win
3	          3	      0	        win
4	         1~3	   3~1      	lose
5	          1	      4(相当于这次他先拿)	win
6	          2	      4	        win
7	          3	      4	        win
8	         1~3	   7~5(相当于这次他先)	lose
9	          1	      8	        win
...

由表可知，只要每次能剩下4的倍数的石子，我就输了
代码如下：
*/
bool canWinNim(int n) {
if(n%4==0){
return false;
}
return true;
}
