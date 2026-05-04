#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};


ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(0);
    ListNode* tail = dummy;

    while (l1 && l2) {
        if (l1->val <= l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    if (l1) tail->next = l1;
    if (l2) tail->next = l2;

    return dummy->next;
}


ListNode* mergeKLists(vector<ListNode*>& lists) {
    if (lists.empty()) return nullptr;

    ListNode* result = lists[0];

    for (int i = 1; i < lists.size(); i++) {
        result = mergeTwoLists(result, lists[i]);
    }

    return result;
}


ListNode* createList(vector<int> arr) {
    if (arr.empty()) return nullptr;

    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;

    for (int i = 1; i < arr.size(); i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }

    return head;
}


void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    
    vector<int> a = {1, 4, 5};
    vector<int> b = {1, 3, 4};
    vector<int> c = {2, 6};

    ListNode* l1 = createList(a);
    ListNode* l2 = createList(b);
    ListNode* l3 = createList(c);

    vector<ListNode*> lists = {l1, l2, l3};

    ListNode* merged = mergeKLists(lists);

    cout << "Merged List: ";
    printList(merged);

    return 0;
}