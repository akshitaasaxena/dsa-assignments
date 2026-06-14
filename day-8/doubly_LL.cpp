#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};
class DoubleLinkedList
{
    Node *head = NULL;
    int size = 0;

public:
    void insertFront(int x)
    {
        Node *new_node = new Node(x);
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
    void insertback(int x)
    {
        Node *new_node = new Node(x);

        if (head==NULL)
        {
            head=new_node;
            return;
        }

        Node *temp=head;

        while(temp->next!= NULL)
        {
            temp=temp->next;
        }

        temp->next = new_node;
        new_node->prev = temp;
    }

    void frontdelete()
    {
        if (head == NULL)
            return;
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
    }
    void deleteend()
    {
        if (head == NULL)
            return;
        if (head->next == NULL)
            head = NULL;
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }
    void print()
    {
        if (head == NULL)
            return;
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void reverse()
    {
        Node *curr = head;
        Node *temp = NULL;

        while (curr != NULL)
        {
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;
            curr = curr->prev;
        }

        if (temp != NULL)
        {
            head = temp->prev;
        }
    }
};
