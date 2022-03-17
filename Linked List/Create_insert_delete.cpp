#include <bits/stdc++.h>
using namespace std;

class node
{
public:
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

void insertAtBegining(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deletion(node *&head, int val)
{
    node *temp = head;
    if (temp == NULL) /* if the list is empty */
    {
        return;
    }
    if(temp->next == NULL){  /* if the list contain only one data */
        head = head->next;
        delete temp;
        return;
    }
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

void deleteHead(node *&head){
    node* toDelete = head;
    head = head->next;
    delete toDelete;
}

void display(node *head)
{
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

    cout << endl;
    cout << endl;
    cout << "Insert at tail : ";
    display(head);

    insertAtBegining(head, 0);

    cout << endl;
    cout << endl;
    cout << "Insert 0 at begining : ";
    display(head);

    cout << endl;
    cout << endl;
    cout << "Searching for 3 : ";
    if (search(head, 3))
    {
        cout << "Found in the List!";
    }
    else
    {
        cout << "Not Found in the List!";
    }

    cout << endl;
    cout << endl;
    cout << "Searching for 10 : ";
    if (search(head, 10))
    {
        cout << "Found in the List!";
    }
    else
    {
        cout << "Not Found in the List!";
    }
    cout << endl;
    cout << endl;

    cout << "Delete 5 : ";
    deletion(head, 5);
    cout << endl;
    cout << endl;

    display(head);

    cout << endl;
    cout << endl;

    cout << "Delete First Node : ";
    deleteHead(head);
    cout << endl;
    cout << endl;

    display(head);

    cout << endl;
    cout << endl;
}