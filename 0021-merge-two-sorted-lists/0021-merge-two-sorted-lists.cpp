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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* finalList = nullptr;
        ListNode** current = &finalList; // pointer to the current node

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                *current = list1; // attach list1 node to the merged list
                list1 = list1->next; // move to the next node in list1
            } else {
                *current = list2; // attach list2 node to the merged list
                list2 = list2->next; // move to the next node in list2
            }
            current = &((*current)->next); // update the current pointer
        }

        // Attach the remaining nodes of list1 or list2, if any
        *current = (list1 != nullptr) ? list1 : list2;

        return finalList;
    }
};