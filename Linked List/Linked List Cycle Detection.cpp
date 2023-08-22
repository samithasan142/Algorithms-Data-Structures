/* Leetcode Problem no: 141 */

#include<bits/stdc++.h>
using namespace std;

//Definition for singly-linked list.
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};

int main() {
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    // Creating a cycle by connecting node4 back to node2
    node4->next = node2;

    Solution sol;

    if (sol.hasCycle(node1)) {
        cout << "The linked list has a cycle." << endl;
    }else{
        cout << "The linked list does not have a cycle." << endl;
    }

    return 0;
}
