class Node{
    public:
        int data;
        Node* next;
};


Node* removeNthFromEnd(Node* head, int n) {
    Node* tmp = head, *ptr;
    ptr = tmp->next;
    int cnt = getCount(tmp);
    int i = 0;
    if(cnt > 1){
    
        while(tmp){
            if(n == cnt - i - 1){
                tmp->next = tmp->next->next;
                delete ptr;
                return head;
            }
                            
            tmp = tmp->next;
            ptr = ptr->next;
            i++;
        }
    }
    
    return NULL;
}
int getCount(Node* head){
    Node* p = head;
    int c = 0;
    while(p){
        c++;
        p = p->next;
    }
    return c;
}

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

int main(){

    Node* head = NULL;
    ins(&head, 6);
    ins(&head, 9);
    ins(&head, 1);
    ins(&head, 3);
    ins(&head, 2);
}