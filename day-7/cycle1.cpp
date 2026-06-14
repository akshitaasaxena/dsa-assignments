#include <iostream>
#include <map>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
};

class cycles{
public:
    bool hasCycle(ListNode *head){
        map<ListNode*,bool> vis;
        ListNode *temp=head;

        while(temp!=NULL){
            if(vis[temp]==true)
                return true;
            vis[temp]=true;
            temp=temp->next;
        }
        return false;
    }
};

int main(){
    ListNode* n1=new ListNode(3);
    ListNode* n2=new ListNode(2);
    ListNode* n3=new ListNode(0);
    ListNode* n4=new ListNode(1);

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n2;

    cycles s;
    cout<<s.hasCycle(n1);

    return 0;
}