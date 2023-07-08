class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {
            return nullptr; // or handle the null cas appropriately
        }
        ListNode* curr_ptr = head;
        ListNode* next_ptr = head;
        ListNode* prev_ptr = nullptr;
        
        while(curr_ptr != nullptr)
        {
            next_ptr = next_ptr->next;
            curr_ptr->next  = prev_ptr;
            prev_ptr = curr_ptr;
            curr_ptr = next_ptr;
        }
        head = prev_ptr;
    
        return head;
    }
};
