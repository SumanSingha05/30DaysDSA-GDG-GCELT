// Linked List Insertion At End
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct ListNode
{
    int data;
    ListNode *next;
    ListNode(int val) : data(val), next(nullptr) {}
};

ListNode *insertAtEnd(ListNode *head, int x)
{
    ListNode *newNode = new ListNode(x);

    if (!head)
        return newNode;

    ListNode *temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;

    return head;
}

void printList(ListNode *head)
{
    while (head)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "null" << endl;
}

int main()
{
    int n, x;
    ListNode *head = nullptr;
    ListNode *tail = nullptr;

    while (cin.peek() != '\n')
    {
        cin >> n;
        ListNode *newNode = new ListNode(n);
        if (!head)
            head = tail = newNode;
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cin >> x;

    head = insertAtEnd(head, x);
    printList(head);

    return 0;
}
