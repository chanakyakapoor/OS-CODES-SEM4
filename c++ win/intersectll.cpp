#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

};

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
 

Node* intersect(Node** head1, Node** head2){

    unordered_map<int, int> m;
    Node* t1 = *head1, *t2 = *head2;
    Node* a = NULL;

    int c1 = getCount(&t1);
    int c2 = getCount(&t2);

    int k = max(c1, c2);
    int l = min(c1, c2);

    int sum = 0, carry = 0;
    
    while(l){
        sum = t1->data + t2->data;
            if(sum > 9){
                a->data = 0;
                a = a->next;
                carry = 1;
            }
            else if(sum <= 9){
                a->data = sum;
                a = a->next;
                carry = 0;
            }
    }
}

void rev(Node** head){
    Node* curr = *head;
    Node* prev = NULL;
    Node* next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr=next;
    }
    *head = prev;
}

void printList(Node *node){
    while(node!=NULL){
        cout<<" -> "<<node->data;
        node = node->next;
    }
}

int main(){

    Node* head1 = NULL, *head2 = NULL;
    ins(&head1, 4);
    ins(&head1, 5);
    ins(&head2, 3);
    ins(&head2, 4);
    ins(&head2, 5);

    rev(&head1);
    rev(&head2);

    intersect(&head1, &head2);
}