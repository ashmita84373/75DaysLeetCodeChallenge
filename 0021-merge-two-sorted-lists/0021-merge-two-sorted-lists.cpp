class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(-1);        // dummy node
        ListNode* temp = &dummy;  // pointer to build result

        while (list1 && list2) {
            if (list1->val <= list2->val) {
                temp->next = list1;
                list1 = list1->next;
            } else {
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }

        // attach remaining nodes
        if (list1) temp->next = list1;
        else temp->next = list2;

        return dummy.next;
    }
};