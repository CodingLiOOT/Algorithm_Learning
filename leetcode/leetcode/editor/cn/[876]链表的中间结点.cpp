
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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast= head,*slow=head;
        //偶数指向中间两个节点的后一个
        while(fast!= nullptr&&fast->next!= nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
//        如果偶数找中间两个节点前一个，可以记录slow的pre指针，也可以用下面方式
//        需要先判空
//        if (head == null || head.next == null) {
//            return head;
//        }
//        // 双指针找到链表中点，slow为中点前一个（常用于分割），slow.next为中点及其右边
//        ListNode slow = head, fast = head.next.next;
//        while (fast != null && fast.next != null) {
//            slow = slow.next;
//            fast = fast.next.next;
//        }
//        // 中点右边 slow.next；；fast
//        fast = slow.next;
//        // 中点左边 head
//        slow.next = null;

    }
};
//leetcode submit region end(Prohibit modification and deletion)
