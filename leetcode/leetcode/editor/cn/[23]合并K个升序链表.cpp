
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
    //1.学习优先队列自定义比较写法
    //2.合并不需要考虑生成链表有环的问题
    struct comp{
        bool operator()(ListNode* a,ListNode* b){
            return a->val>b->val;
        }
    };
    priority_queue<ListNode*,vector<ListNode*>,comp> q;
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        for (auto node :lists) {
            if(node) q.push(node);
        }
        ListNode* res=new ListNode(-1);
        ListNode* p = res;
        while(!q.empty()){
            p->next=q.top();
            q.pop();
            p=p->next;
            if(p->next) q.push(p->next);
        }
        return res->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
