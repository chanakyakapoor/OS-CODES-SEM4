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

bool palin(Node** head){

    Node* slow = *head, *fast = *head;
    Node* p1 = NULL, *p2 = NULL;
    
//rev a list and compare to original list

    // while(fast){
    //     slow = slow->next;
    //     fast = fast->next->next;

    //     if(fast->next->next = NULL){
    //         slow = p1;
    //         slow = p2;
    //         fast = fast->next;
    //         break;
    //     }

    //     else if(fast->next == NULL){
    //         slow = p1;
    //         slow->next = p2;
    //         break;
    //     }
    // }
    


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
    ins(&head1, 3);
    ins(&head1, 5);
    ins(&head1, 4);
    
    palin(&head1);

}