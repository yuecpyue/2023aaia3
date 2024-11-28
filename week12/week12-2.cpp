//week12-2.cpp 21. Merge Two Sorted Lists (未完成)
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //ListNode *ans=list1; //宣告答案(1)直接接到list1
        //ListNode *ans=new ListNode(99);//(2)新增值99
        ListNode *ans=new ListNode(99,new ListNode(88));//(3)再新增一個值，右邊值為88
        return ans;
    }
};
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
