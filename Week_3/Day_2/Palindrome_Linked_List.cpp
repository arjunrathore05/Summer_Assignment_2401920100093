class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        ListNode* prev = NULL;
        ListNode* forward = NULL;

        while(current != NULL){
            forward = current->next;
            current->next = prev;
            prev = current;
            current = forward;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return true;

        ListNode* slow = head;
        ListNode* fast = head;

       
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

      
        ListNode* nhead = reverseList(slow);

      
        while(nhead != NULL){
            if(head->val != nhead->val){
                return false;
            }
            head = head->next;
            nhead = nhead->next;
        }

        return true;
    }
};
