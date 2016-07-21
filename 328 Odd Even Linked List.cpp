//超时：

class Solution {
public:
ListNode* oddEvenList(ListNode* head) {
if(head==NULL||head->next==NULL||head->next->next==NULL) return head;
ListNode *p,*q,*r;
p=head;
q=head->next;
r=head->next->next;
while(r!=NULL)
{
p->next=r;
q->next=r->next;
p=p->next;
q=q->next;
r=q->next;
}
p->next=head->next;
return head;
}
};

//Runtime error

class Solution {
public:
ListNode* oddEvenList(ListNode* head) {
if(head==NULL||head->next==NULL||head->next->next==NULL) return head;
ListNode *p,*q,*r;
p=head;
q=head->next;
while(p->next->next!=NULL)
{
p->next=p->next->next;
p=p->next;
}
while(q->next->next!=NULL)
{
q->next=q->next->next;
q=q->next;
}
p->next=head->next;
return head;
}
};

//正确代码如下：

class Solution {
public:
ListNode* oddEvenList(ListNode* head) {
ListNode *p,*q,*r;
if(head==NULL||head->next==NULL) return head;
p=head;
q=head->next;
r=head->next;
while(p!=NULL&&q!=NULL)
{
if(q->next==NULL)
{
break;
}
else
{
p->next=q->next;
p=q->next;
}
if(p->next==NULL)
{
q->next = NULL;
break;
}
else
{
q->next=p->next;
q=p->next;
}
}
p->next=r;
return head;
}
};
//这里一定要将q->next置为空，不然它仍指向p，进入了一个死循环。
