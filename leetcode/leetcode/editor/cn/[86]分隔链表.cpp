
//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *l_dummy=new ListNode(-1),*g_dummy=new ListNode(-1);
        ListNode *p1=l_dummy,*p2=g_dummy;
        while(head!= nullptr){
            if(head->val<x){
                p1->next=head;
                p1=p1->next;
            } else{
                p2->next=head;
                p2=p2->next;
            }
            //断掉head的next指针
            //防止出现测试用例中1->2->2->4->3->5->2（第二个2）链表有环的情况
            ListNode* temp=head->next;
            head->next= nullptr;
            head=temp;
        }
        p1->next=g_dummy->next;
        return l_dummy->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
