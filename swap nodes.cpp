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
    ListNode* swapPairs(ListNode* head) {
        
    if (head == NULL || head->next== NULL)
        return head;
    
    int Nextpair;
    ListNode*currNode = head;
    ListNode* dummy = new ListNode();
    ListNode*Prev = dummy;
    //ListNode*newHead=head->next;
    
     
    while(currNode!= NULL && currNode->next!= NULL){
        //saveptrs
        ListNode*nextpair=currNode->next->next;
        ListNode*second=currNode->next;

        //reverse
        second->next= currNode;
        currNode->next=nextpair;
        Prev->next=second;

        //
        Prev=currNode;
        currNode=nextpair;

        
    }
    return dummy->next;
    }
};
