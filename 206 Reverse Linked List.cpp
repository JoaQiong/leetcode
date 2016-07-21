/*
Reverse Linked List
从前往后遍历取出链表的每个值放入vector中（它是可以动态添加的），
最后又从后往前遍历vector放入链表中，即逆置了。代码如下：
*/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> vec;
        int i;
        ListNode *p;
        p=head;
        if(head==NULL||head->next==NULL)
        return head;
        while(p!=NULL)
        {
            vec.push_back(p->val);
            p=p->next;
        }
        p=head;
        for(i=(vec.size()-1);i>=0;i--)
        {
            p->val=vec[i];
            p=p->next;
        }
        return head;
    }
};

用栈实现一下，栈是后进先出，代码如下：
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        stack<int> s;
        ListNode *p;
        p=head;
        if(head==NULL||head->next==NULL) return head;
        while(p!=NULL)
        {
            s.push(p->val);
            p=p->next;
        }
        p=head;
        while(p!=NULL)
        {
            p->val=s.top();
            s.pop();
            p=p->next;
        }
        return head;
    }
};
