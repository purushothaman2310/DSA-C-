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
        //saveptrs                                    //0->1->2->3->4->null
        ListNode*nextpair=currNode->next->next;        //nextpair->3->4;
        ListNode*second=currNode->next;                //2 is second node

        //reverse
        second->next= currNode;                        //2->1
        currNode->next=nextpair;                       //1->3->4
        Prev->next=second;                             //0->2->1

        //
        Prev=currNode;                                update and assingning it
        currNode=nextpair;

        
    }
    return dummy->next;
    }
};
