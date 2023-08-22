// here and tourtouce algo 
// floyed warsell algo

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head , int val){
    node* n = new node(val);

    if(head == NULL){
        head  = n;
        return ;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
    }
    cout<<"NULL"<<endl;
}

    void makeCycle(node* &head , int pos){
        node* temp = head;
        node* startNode;
        int count = 1;
        while(temp->next!=NULL){

            if(count==pos){
                startNode = temp;
            }
            temp = temp->next;
            count++;
        }
        temp->next = startNode;
    }

    bool detect(node* &head){
        node* slow=head;
        node* fast = head;

        while(fast!= NULL && fast->next !=NULL){
            slow  = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                return true;
            }
        }

        return false;
    }

    void removeCycle(node* &head){
        node* slow = head;
        node* fast = head;

        do
        {
            slow=slow->next;
            fast = fast->next->next;
        } while (slow != fast);

        fast  = head;
        while(fast->next != slow->next){
            slow= slow->next;
            fast= fast->next;
        }
        slow->next = NULL;
        
    }
int main(){

    node* head= NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);--
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    makeCycle(head , 3);
    cout<<detect(head)<<endl;
    removeCycle(head);
    cout<<detect(head)<<endl;
    display(head);

    return 0;
}