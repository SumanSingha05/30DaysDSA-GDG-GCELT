// Node insert at K
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node(int v) : val(v), next(nullptr) {}
};

Node *insertAtKthFromEnd(Node *head, int k, int x)
{
    Node *newNode = new Node(x);
    if (!head)
        return newNode;

    int len = 0;
    Node *temp = head;
    while (temp)
    {
        len++;
        temp = temp->next;
    }

    int posFromStart = len - k;
    if (posFromStart == -1)
    {
        newNode->next = head;
        return newNode;
    }

    temp = head;
    for (int i = 0; i < posFromStart; i++)
    {
        if (!temp->next)
            break;
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

void printList(Node *head)
{
    while (head)
    {
        cout << head->val;
        if (head->next)
            cout << "->";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    vector<int> values;
    int val;
    while (cin.peek() != '\n' && cin >> val)
    {
        values.push_back(val);
    }

    int k, x;
    cin >> k >> x;

    Node *head = nullptr, *tail = nullptr;
    for (int v : values)
    {
        if (!head)
        {
            head = new Node(v);
            tail = head;
        }
        else
        {
            tail->next = new Node(v);
            tail = tail->next;
        }
    }

    head = insertAtKthFromEnd(head, k, x);
    printList(head);

    return 0;
}
