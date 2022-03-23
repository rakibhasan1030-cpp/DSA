#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

node *oddEvenList(node *head)
{

    if (head == NULL || head->next == NULL || head->next->next == NULL)
        return head; /* Boundary Cases*/

    auto *end = head;
    int count = 0;
    while (end->next)
    {
        end = end->next;
        count++;
    }

    count = count & 1 ? (count / 2) + 1 : count / 2;
    auto *temp = head;
    while (count--)
    {
        end->next = temp->next;
        temp->next = temp->next->next;
        end->next->next = NULL;

        temp = temp->next;
        end = end->next;
    }
    return head;
}

void display(node *&head)
{
    if (head == NULL)
        return;
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    cout<<endl;
    cout<<endl;
    
    display(head);
    cout<<endl;
    cout<<endl;

    oddEvenList(head);

    display(head);
    cout<<endl;
    cout<<endl;
    return 0;
}