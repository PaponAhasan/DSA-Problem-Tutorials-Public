/*
Insert Node Append(Last)
*/

#include <bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node{
   int data;
   node *next;
};

Node* Create_Node(int data, Node* next){
    
    Node *new_node = (Node*)malloc(sizeof(Node)); // void*  or NULL
    
    if(new_node == NULL) {
        printf("Error!\n");
        exit(1);
    }
    
    // new_node = [data | next]
    
    new_node->data = data;
    new_node->next = next;
    
    return new_node;
}

Node* Append(Node *head){
    
    Node *new_node = Create_Node(20, NULL); // [20 | NULL]
    
    Node *current_node = head;
    
    while(current_node->next != NULL){
        current_node = current_node->next;
    }
    
    current_node->next = new_node;
    
    return head;

}

void Print_Linked_List(Node* head){
    
    Node *current_node = head;
        
    while(current_node != NULL){
        printf("%d ", current_node->data); // 10
        current_node = current_node->next;
    }
}

int main() {
    
	Node *head;
	
	head = Create_Node(10, NULL);  //[10 | NULL]
	
	Append(head);
	
	Print_Linked_List(head);
	
	
	return 0;
}
