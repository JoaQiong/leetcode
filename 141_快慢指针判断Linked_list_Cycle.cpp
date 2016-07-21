/*Linked   list   Cycle
需要知道快慢指针这个技巧。
具体代码如下：
*/
class Solution {
public:
bool hasCycle(ListNode *head) {
if(head==NULL){
return false;
}
ListNode *fast,*slow;
fast=slow=head;
while(fast->next!=NULL&&fast->next->next!=NULL){
fast=fast->next->next;
slow=slow->next;
if(fast==slow)
return true;
}
return false;
}
};
