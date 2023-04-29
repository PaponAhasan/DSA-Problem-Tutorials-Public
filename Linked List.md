### Insertion

```c++
class Node{
  public:
  int data;
  Node* next;
  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};

Node* tail;

void InsertAtFront(Node* &head, int data){
  /*O(1)*/
  Node* tmp = new Node(data);
  tmp->next = head;
  head = tmp;
}

void InsertAtTailUsingHead(Node* &head, int data){
  /*O(n)*/
  Node* new_node = new Node(data);
  Node* tmp = head;
  while(tmp->next != NULL){
     tmp = tmp->next;
  }
  tmp->next = new_node;
  tail = new_node;
}

void InsertAtTail(Node* &head, Node* &tail, int data){
  /*O(1)*/
  Node* new_node = new Node(data);
  if(tail == NULL){
    head = new_node;
    tail = new_node;
    return;
  }
  tail->next = new_node;
  tail = new_node;
}

void InsertAtPosition(Node* &head, int data, int position){
  /*O(n)*/
  Node* new_node = new Node(data);
  if(position == 1){
    InsertAtFront(head, data);
    return;
  }
  
  Node* tmp = head;
  int i = 1;
  while(i < position - 1){
    tmp = tmp->next;
    i++;
  }
  if(tmp != NULL){
    new_node->next = tmp->next;
    tmp->next = new_node;
    if(new_node->next == NULL){
      tail = new_node;
    }
    return;
  }
  cout << "position is out of range" << '\n';
}

void Print(Node* &head){
  Node* tmp = head;
  while(tmp != NULL){
    cout << tmp->data << "\n";
    tmp = tmp->next;
  }
}

int main() {
  Node* head = NULL;
  //Node* tail = NULL;
  
  printf("----- Insert Front----\n");
  InsertAtFront(head, 20);
  tail = head; // first node
  InsertAtFront(head, 30);
  Print(head);
  
  printf("----- Insert Tail----\n");
  InsertAtTailUsingHead(head, 40);
  InsertAtTail(head, tail, 50);
  Print(head);
  
  printf("----- Insert Position----\n");
  InsertAtPosition(head, 60, 2);
  Print(head);
  
  printf("----- Insert Tail----\n");
  InsertAtTail(head, tail, 70);
  Print(head);
  
  cout << "Head : " << head->data << " Tail: " << tail->data << "\n";
  return 0;
}
```
