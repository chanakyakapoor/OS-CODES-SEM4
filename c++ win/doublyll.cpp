#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* prev;

};

void insAtEnd(Node** head, int data){

    Node* tmp = *head;
    Node* new_node = new Node();

    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;

    if(*head == NULL){
        *head = new_node;
        return;
    }

    while(tmp->next){
        tmp->next = next;
    }
}

int main(){
    Node* head = NULL;
    insAtEnd(&head, 1);
    insAtEnd(&head, 2);
    insAtEnd(&head, 3);
    insAtEnd(&head, 4);
    insAtEnd(&head, 5);
}