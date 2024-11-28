//week12-3.cpp 21. Merge Two Sorted Lists 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans=new ListNode(0);
        ListNode *now=ans;
        while(list1!=nullptr || list2!= nullptr){
            if(list1==nullptr){//如list1是空的
                now->next=list2;//把list2全下
                break;
            }else if(list2==nullptr){//如list2是空的
                now->next=list1;//把list1全下
                break;
            }else if(list1->val<list2->val){
                now->next=new ListNode(list1->val);//小的，放入
                list1=list1->next;//換下一筆
                now=now->next;//答案也換下一筆
            }else{
                now->next=new ListNode(list2->val);
                list2=list2->next;//換下一筆
                now=now->next;//答案也換下一筆
            }
        }
        return ans->next;
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
