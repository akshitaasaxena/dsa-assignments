#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head=tail=NULL;
    }

    void Push_front(int val){
        Node* newNode=new Node(val);

        if(head==NULL){
            head=tail=newNode;
            return;
        }

        newNode->next=head;
        head=newNode;
    }

    void rev_ll(){
        Node* prev=NULL;
        Node* curr=head;
        Node* next=NULL;

        tail=head;

        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        head=prev;
    }

    void printLL(){
        Node* temp=head;

        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }

        cout<<"null"<<endl;
    }
};

int main(){
    List l;

    l.Push_front(10);
    l.Push_front(20);
    l.Push_front(30);
    l.Push_front(40);
    l.Push_front(50);

    l.printLL();

    l.rev_ll();

    l.printLL();
}