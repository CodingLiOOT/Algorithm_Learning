
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
    ListNode* findNthFromEnd(ListNode* head,int n){
        ListNode* fast=head,*slow=head;
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        while(fast!= nullptr){
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //遇到处理第一个节点困难的情况，考虑添加一个头节点保证操作统一
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* p=findNthFromEnd(dummy,n+1);
        p->next=p->next->next;
        return dummy->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
