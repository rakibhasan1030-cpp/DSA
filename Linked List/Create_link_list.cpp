#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};


void push(Node** head_ref, int new_data)
{
    /* 1. allocate node */
    Node* new_node = new Node();
 
    /* 2. put in the data */
    new_node->data = new_data;
 
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);
 
    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}

Node *deleteNode(Node *head, Node *node)
{
    if (head == node)
    {
        head = node->next;
        free(node);
        return head;
    }

    Node *curr_node = head;
    while (curr_node != NULL)
    {
        if (curr_node->next == node)
        {
            break;
        }
        curr_node = curr_node->next;
    }
    if (curr_node == NULL)
    {
        return head;
    }

    curr_node->next = node->next;
    free(node);

    return head;
}

int main()
{
    /* Start with the empty list */
    Node* head = NULL;
     
    // Insert 7 at the beginning.
    // So linked list becomes 7->6->NULL
    push(&head, 7);
     
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}
