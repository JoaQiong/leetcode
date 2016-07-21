Swap Nodes in Pairs
/*由题意，不是交换节点里的值，而是交换节点，用指针在原链表上操作很容易出错，这里分离开奇数节点和偶数节点，
用指针p遍历链表，指针q用来串起奇数结点，r串起偶数结点，注意此时相当于两个链表，我们需要将尾结点置空，此时
即转化为合并两个链表了。并且由题意可知偶数节点一定小于等于奇数节点，代码如下：*/
class Solution {
public:
ListNode* swapPairs(ListNode* head) {
if(head==NULL||head->next==NULL)
return head;
int i=2;
ListNode *p,*q,*r,*s;
q=head;
r=head->next;
s=head->next;
p=head->next->next;

while(p!=NULL)
{
i++;
if(i%2==1)
{
q->next=p;
q=q->next;
}
else
{
r->next=p;
r=r->next;
}
p=p->next;
}
q->next=NULL;   //必须将分离的链表尾节点置空
r->next=NULL;

q=head;         //重新让q、r指向奇数偶数节点链表
r=s;
ListNode* prev;  //始终指向r的前一个节点，用于处理奇数节点多一个的
while(r!=NULL)   //情况
{
ListNode* temp = r->next;
r->next=q;
q = q->next;
r = r->next;
r->next = temp;
prev = r;
r = r->next;
}
if(q)prev->next = q;
return s;
}
};
