Remove Duplicates from Sorted List
代码：
class Solution {
public:
ListNode* deleteDuplicates(ListNode* head) {
ListNode *p,*q;

if(head==NULL||head->next==NULL)  return head;
p=head;
q=head->next;
while(p!=NULL&&q!=NULL)
{
if(p->val==q->val)
{
q=q->next;
p->next=q;
}
else
{
p=q;
q=q->next;
}
}
return head;
}
};
