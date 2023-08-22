/* Leetcode Problem no: 876 */

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
 };

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;

        while(fastPtr != NULL && fastPtr->next != NULL){
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }

        return slowPtr;
    }
};

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution sol;
    ListNode* middle = sol.middleNode(head);

    cout << "The middle node value is: " << middle->val << endl;

    return 0;
}


// This algorithm is called "Hare And Tortoise Algorithm"
