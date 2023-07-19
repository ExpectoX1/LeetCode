class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return true; // An empty list or a single node list is a palindrome
        
        ListNode* firstHalfEnd = getFirstHalfEnd(head);
        ListNode* secondHalfStart = reverseList(firstHalfEnd->next);
        
        ListNode* p1 = head;
        ListNode* p2 = secondHalfStart;
        
        bool isPalindrome = true;
        while (isPalindrome && p2 != nullptr) {
            if (p1->val != p2->val)
                isPalindrome = false;
            p1 = p1->next;
            p2 = p2->next;
        }
        
        // Restore the original order of the second half of the list
        firstHalfEnd->next = reverseList(secondHalfStart);
        
        return isPalindrome;
    }
    
private:
    ListNode* getFirstHalfEnd(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
    
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        
        while (current != nullptr) {
            ListNode* nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        
        return prev;
    }
};
