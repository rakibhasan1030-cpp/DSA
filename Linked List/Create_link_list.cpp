#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

Node *createNode(int data, Node *next)
{
    Node *tmp = new Node();
    if (tmp == NULL)
    {
        cout << "Can not create a node!";
        exit(1);
    }
    tmp->value = data;
    tmp->next = next;
    return tmp;
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
    Node *head, *one, *two, *three, *four, *five, *six;

    head = one;
    one = createNode(1, two);
    two = createNode(2, three);
    three = createNode(3, four);
    four = createNode(4, five);
    five = createNode(5, six);
    six = createNode(6, NULL);

    // one = new Node();
    // two = new Node();
    // three = new Node();
    // four = new Node();
    // five = new Node();
    // six = new Node();

    // one->value = 1;
    // two->value = 2;
    // three->value = 3;
    // four->value = 4;
    // five->value = 5;
    // six->value = 6;

    // head = one;
    // one->next = two;
    // two->next = three;
    // three->next = four;
    // four->next = five;
    // five->next = six;
    // six->next = NULL;

    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    return 0;
}
