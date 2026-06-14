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

    void middle_ll(){
        Node* slow=head;
        Node* fast=head;

        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        cout<<"Middle"<<endl<<slow->data;
    }

    void printLL(){
        Node* temp=head;

        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }

        cout<<"null\n";
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
    l.middle_ll();
}