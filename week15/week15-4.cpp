//week15-4.cpp 445. Add Two Numbers II 未完成只l1倒過來
class Solution {
public:
    ListNode* myReverse(ListNode *l1){
        vector<int> a;
        while(l1!=nullptr){
            a.push_back(l1->val);
            l1=l1->next;
        } //把l1倒過來
        ListNode* ans=new ListNode();
        ListNode* now=ans;
        int N=a.size();
        for(int i=N-1;i>=0;i--){
            now->next=new ListNode(a[i]);
            now=now->next;
        }
        return ans->next;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return myReverse(l1);
    }
};