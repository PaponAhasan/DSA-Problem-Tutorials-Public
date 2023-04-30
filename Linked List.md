### Insertion Singly Linked List

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

void InsertAtFront(Node* &head, Node* &tail, int data){
  /*O(1)*/
  Node* new_node = new Node(data);
  if(head == NULL && tail == NULL){
    head = new_node;
    tail = new_node;
    return;
  }
  new_node->next = head;
  head = new_node;
}

void InsertAtTailUsingHead(Node* &head, Node* &tail, int data){
  /*O(n)*/
  Node* new_node = new Node(data);
  if(head == NULL && tail == NULL){
    head = new_node;
    tail = new_node;
    return;
  }
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
  if(head == NULL && tail == NULL){
    head = new_node;
    tail = new_node;
    return;
  }
  tail->next = new_node;
  tail = new_node;
}

void InsertAtPosition(Node* &head, Node* &tail, int data, int position){
  /*O(n)*/
  Node* new_node = new Node(data);
  if(head == NULL && tail == NULL){
    head = new_node;
    tail = new_node;
    return;
  }
  if(position == 1){
    InsertAtFront(head, tail, data);
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
  Node* tail = NULL;
  
  printf("----- Insert Front----\n");
  InsertAtFront(head, tail, 20);
  tail = head; // first node
  InsertAtFront(head, tail, 30);
  Print(head);
  
  printf("----- Insert Tail----\n");
  InsertAtTailUsingHead(head, tail, 40);
  InsertAtTail(head, tail, 50);
  Print(head);
  
  printf("----- Insert Position----\n");
  InsertAtPosition(head, tail, 60, 2);
  Print(head);
  
  printf("----- Insert Tail----\n");
  InsertAtTail(head, tail, 70);
  Print(head);
  
  cout << "Head : " << head->data << " Tail: " << tail->data << "\n";
  return 0;
}
```

### Delete Singly Linked List

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

void InsertAtTail(Node* &head, Node* &tail, int data){
  /*O(1)*/
  Node* new_node = new Node(data);
  if(head == NULL && tail == NULL){
    head = new_node;
    tail = new_node;
    return;
  }
  tail->next = new_node;
  tail = new_node;
}

void DeleteAtNode(Node* &head, Node* &tail, int target){
  Node* temp = head;
  Node* prev = NULL;
  
  if(temp != NULL && temp->data == target){
    head = temp->next;
    delete temp;
    return;
  }
  
  while(temp != NULL && temp->data != target){
    prev = temp;
    temp = temp->next;
  }
  if(temp != NULL){
    prev->next = temp->next;
  }
  delete temp;
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
  Node* tail = NULL;
  
  printf("----- Insert Tail----\n");
  InsertAtTail(head, tail, 20);
  InsertAtTail(head, tail, 50);
  InsertAtTail(head, tail, 150);
  Print(head);
  
  cout << "Head : " << head->data << " Tail: " << tail->data << "\n";
  
  DeleteAtNode(head, tail, 20);
  Print(head);
  return 0;
}
```
