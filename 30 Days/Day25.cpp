// Add two numbers- LINKED LIST
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *dummy = new ListNode(0);
    ListNode *curr = dummy;
    int carry = 0;

    while (l1 || l2 || carry)
    {
        int sum = carry;
        if (l1)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2)
        {
            sum += l2->val;
            l2 = l2->next;
        }
        carry = sum / 10;
        curr->next = new ListNode(sum % 10);
        curr = curr->next;
    }

    return dummy->next;
}

void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

ListNode *createList(int n)
{
    ListNode *head = nullptr;
    ListNode *tail = nullptr;
    int value;

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        ListNode *newNode = new ListNode(value);
        if (!head)
            head = tail = newNode;
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

int main()
{
    int n1, n2;
    cin >> n1;
    ListNode *l1 = createList(n1);

    cin >> n2;
    ListNode *l2 = createList(n2);

    ListNode *result = addTwoNumbers(l1, l2);
    printList(result);

    return 0;
}
