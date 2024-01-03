#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val)
{
    node* n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void deletion(node* &head, int val)
{
    if(head == NULL) return;
    node* temp = head;
    if(head->data == val)
    {
        node* firstDelete = head;
        head = head->next;
        delete firstDelete;
        return;
    }
    while(temp->next->data != val)
    {
        temp= temp->next;
    }
    node* toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}
void reverseL(node* &head)
{
    node* prev = NULL;
    node* current = head;
    node* currentNext;
    while(current!= NULL)
    {
        currentNext = current->next;
        current->next = prev;

        prev = current;
        current = currentNext;
    }
    head = prev;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        if(temp->next != NULL) cout<<"->";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 5);
    insertAtTail(head, 10);
    insertAtTail(head, 15);
    insertAtTail(head, 20);
    display(head);

    reverseL(head);
    display(head);

    deletion(head, 15);
    display(head);
    deletion(head, 5);
    display(head);
}