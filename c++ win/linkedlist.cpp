#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

};
//insert
void ins(Node** head, int data){

    Node* new_node = new Node();
    Node* ptr = *head;

    new_node->data = data;
    new_node->next = NULL;

    if(*head == NULL){
        *head = new_node;
        return;
    }

    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    ptr->next = new_node;
    return;
}

void del(Node** head, int data){

    Node* tmp = *head;
    Node* prev = NULL;

    while(tmp!=NULL && tmp->data != data){
        prev = tmp;
        tmp = tmp->next;
    }

    if(tmp == NULL){
        return;

    }
    prev->next = tmp->next;

    delete tmp;
}

void rev(Node** head){
    Node* curr = *head;
    Node* prev = NULL;
    Node* next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    *head = prev;
}

int getCount(Node** head)
{
    int count = 0; 
    Node* current = *head; 
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
 

Node* revgrp(Node* head, int k){

    Node* curr = head;
    Node* prev = NULL, *next = NULL;
    int c=0;

    while(curr !=NULL && c<k){
        
            next = curr->next;
            curr->next = prev;
    
            prev = curr;
            curr=next;
            c++;
        }
    if(next!=NULL){
        head->next = revgrp(next, k);
    }
    
    return prev;
}

void makeloop(Node** head, int k){
    
    Node* tmp = *head;
    Node* startnode;

    int c = 1;

    while(tmp->next != NULL){
        if(c == k){
            startnode = tmp;
        }
        tmp = tmp->next;
        c++;
    }

    tmp->next = startnode;
}

Node* addone(Node* head, int c){

    int carry = 0, sum = 0;

    Node* tmp = head;
    
    while(tmp){
        if(tmp == head && tmp->data == 9){
            tmp->data = 0;
            carry = 1;
        }
        else if(tmp == head && tmp->data < 9){
            tmp->data += 1;
            break;
        }
        else if(tmp->data < 9){
            tmp->data += carry;
            carry = 0;
            break;
        }
        else if(tmp->data == 9 && tmp->next == NULL){
            tmp->data = 0;
            ins(&head, 1);
            break;
        }
        else{
            tmp->data = 0;
            carry = 1;
        }
        tmp = tmp->next;
    }
    return head;

}

Node* addnumber(Node** head1, Node** head2){

    
}
bool detectloop(Node** head){

    Node* slow = *head, *fast = *head;

    while(fast != NULL && fast->next != NULL){
        
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }

    return false;
}

Node* revbyk(Node*  head, int k){
    Node* tmp = head, *prev = NULL, *ptr = head;
    while(k){
        while(tmp){
            if(tmp->next == NULL){
                ptr = tmp->next;
                prev->next = NULL;
                // head = tmp;
                break;
            }
            prev = tmp;
            tmp = tmp->next;
        }
        k--;
    }
    return tmp;
}

void printList(Node *node){
    while(node!=NULL){
        cout<<" -> "<<node->data;
        node = node->next;
    }
}
int main(){

    Node* head = NULL;

    // ins(&head, 1);
    // ins(&head, 0);
    // ins(&head, 0);
    // ins(&head, 0);
    ins(&head, 6);
    ins(&head, 9);
    ins(&head, 1);
    ins(&head, 3);
    ins(&head, 2);
    ins(&head, 8);
    ins(&head, 0);
    ins(&head, 13);

    printList(head);

    // del(&head, 7);
    // cout<<"\n";

    // printList(head);
    revbyk(head,2);
    cout<<"\n";

    printList(head);

    //rev in grp

    // revgrp(head, 2);
    // cout<<"\n";

    // printList(head);

    // makeloop(&head, 4);

    //detect loop

    // bool ans = detectloop(&head);
    // cout<<"\n"<<ans;

    // int c = getCount(&head);
    // cout<<"\n"<<c;

    // addone(head, c);

    // cout<<"\n";
    // printList(head);
    
    // rev(&head);
    // cout<<"\n";

    // printList(head);

    //add two numbers
    // Node* head1 = NULL, *head2 = NULL;
    // ins(&head1, 4);
    // ins(&head1, 5);
    // ins(&head2, 3);
    // ins(&head2, 4);
    // ins(&head2, 5);

    // addnumber(&head1, &head2);


}