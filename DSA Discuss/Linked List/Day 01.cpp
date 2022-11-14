#include <iostream>
using namespace std;

typedef struct node Node;

struct node{
    int data;
    struct node *next;
};

Node *Create_Node(int data, Node *next){
    
    Node* new_node = (Node*) malloc(sizeof(Node)); // void*  else NULL
    
    if(new_node == NULL) {
        printf("insufficient memory\n");
        exit(0);
    }
    
    new_node->data = data;
    new_node->next = next;
    
    return new_node;
}   

void print_linked_list(Node *head){
    
    Node *current_node = head;
    
    while(current_node != NULL){
        printf("%d ", current_node->data);
        current_node = current_node->next;
    }
}

int main() {
	
	Node* head;

	head = Create_Node(10, NULL);
    head = Create_Node(20, head);
    
	print_linked_list(head);
	
	return 0;
}
