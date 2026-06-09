
#include <iostream>
using namespace std;
class node {
public:
	int data;
	node* next;
	node(int x) {
		data=x;
		next=NULL;
	}
};
//print ll:
void display(node*& head){
    node* i=head;
    while(i!=NULL){
        cout<<i->data<<" ";
        i=i->next;  
        
    }
    cout<<endl;
}
//insertion
//insertion: at the front
void insertfront(node*& head, int h){
    node* newnode= new node(h);
    newnode -> next=head;
    head=newnode;
}
//at the back
void insertback(node*& head,int h){
    node* newnode=new node(h);
    if(head==NULL){
        head=newnode;
    }
    else {
        node* temp = head;
        while (temp -> next != NULL)temp = temp -> next;
        temp -> next = newnode;
    }
}
//insert at position
void insertposition(node*& head,int pos,int h){
    if (pos==1){
        node* temp= new node(h);
        newnode -> next=head;
        head=newnode;
        return;
    }
        node * curr=head;
        for (int i=0;i<pos-1 && curr!=NULL;i++){
            curr=curr->next;
        }
        if(curr=NULL){
            return;
        }
        node * node= new node(h);
        node->next=curr->next;
        curr->next=node;
    
}
//deletion

//from front
void deletefront(node*& head){
    if(head==NULL){
        return;
    }
    node* temp =head;
    head=head->next;
    delete temp;
}
// from last
void deletelast(node*& head){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        delete head;
        head=NULL;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}
//from anyposition
void deleteposition(node*& head, int pos){
    if(head=NULL){
        return;
    }
    if(pos==1){
        node* temp=head;
        head=head->next;
        delete temp;
        return;
        
    }
    node* curr=head;
    for(int i=0;i<pos-1 && curr!=NULL;i++){
        curr=curr->next;
    }
    if(curr==NULL || curr->next==NULL){
        return;
    }
    node* temp=curr->next;
    curr->next=temp->next;
    delete temp;
}
// length
int length(node*& head){
    int count=0;
    node*temp=head;
    while(temp!=null){
        count ++;
        temp=temp->next;
        
    }
    return count;
}
//search
bool search (node* head,int h){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key)
        return true;
        temp=temp->next
        
    }
    return false;
}
//
int main()
{
	

	return 0;
}