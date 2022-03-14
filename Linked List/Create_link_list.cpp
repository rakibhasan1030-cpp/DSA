#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node **head, int data){
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void insertAfter(Node *prevNode, int data){
    if(prevNode == NULL){
        cout<< "Previous Node can't be NULL!";
        exit(1);
    }
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
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
    push(&head, 8);
    push(&head, 9);
    push(&head, 10);

    insertAfter(head->next, 15);
     
    while (head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}
