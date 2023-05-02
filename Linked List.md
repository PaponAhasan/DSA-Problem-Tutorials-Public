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

### Deletion Singly Linked List

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
    if(temp->next == NULL){
      head = NULL;
      tail = NULL;
    }
    else {
      head = temp->next;
      temp->next = NULL;
    }
    delete temp;
    return;
  }
  
  while(temp != NULL && temp->data != target){
    prev = temp;
    temp = temp->next;
  }
  if(temp != NULL){
    prev->next = temp->next;
    if(prev->next == NULL){
      tail = prev;
    }
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

void PrintHeadTail(Node* &head, Node* &tail){
  if(head != NULL && tail != NULL){
    cout << "Head : " << head->data << " Tail: " << tail->data << "\n";
  }
  else cout << "Stack is empty" << '\n';
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;
  
  printf("----- Insert Tail----\n");
  InsertAtTail(head, tail, 20);
  InsertAtTail(head, tail, 50);
  InsertAtTail(head, tail, 150);
  Print(head);
  PrintHeadTail(head, tail);
  
  DeleteAtNode(head, tail, 50);
  Print(head);
  PrintHeadTail(head, tail);
  return 0;
}
```

### Insertion Doubly Linked List

```c++
class Node{
  public:
  int data;
  Node* prev;
  Node* next;
  Node(int data){
    this->data = data;
    this->prev = NULL;
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
  head->prev = new_node;
  head = new_node;
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
  new_node->prev = tail;
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
    tmp = tmp->next;  /*tmp is prvious node in position*/
    i++;
  }
 
  if(tmp != NULL){
    new_node->next = tmp->next;
    tmp->next->prev = new_node;
    new_node->prev = tmp;
    tmp->next = new_node;
    if(new_node->next == NULL){
      tail = new_node;
    }
    return;
  }
  cout << "position is out of range" << '\n';
}

void PrintHeadToTail(Node* &head){
  cout << "Traverse Head to Tail : \n";
  Node* temp = head;
  while(temp != NULL){
    cout << temp->data << "\n";
    temp = temp->next;
  }
}

void PrintTailToHead(Node* &tail){
  cout << "Traverse Tail to Head : \n";
  Node* temp = tail;
  while(temp != NULL){
    cout << temp->data << "\n";
    temp = temp->prev;
  }
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;
  
  printf("----- Insert Front ----\n");
  InsertAtFront(head, tail, 10);
  InsertAtFront(head, tail, 40);
  InsertAtFront(head, tail, 140);
  PrintHeadToTail(head);
  PrintTailToHead(tail);
  cout << "Head : " << head->data << " Tail: " << tail->data << "\n";
  
  printf("\n----- Insert Tail----\n");
  InsertAtTail(head, tail, 20);
  InsertAtTail(head, tail, 50);
  InsertAtTail(head, tail, 150);
  PrintHeadToTail(head);
  cout << "Head : " << head->data << " Tail: " << tail->data << "\n";
  
  printf("----- Insert Position----\n");
  InsertAtPosition(head, tail, 60, 2);
  PrintHeadToTail(head);
  PrintTailToHead(tail);
  
  return 0;
}
```

### Deletion Doubly Linked List

```c++
class Node{
  public:
  int data;
  Node* prev;
  Node* next;
  Node(int data){
    this->data = data;
    this->prev = NULL;
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
  new_node->prev = tail;
  tail = new_node;
}

void DeleteAtNode(Node* &head, Node* &tail, int target){
  Node* curr = head;
  Node* currPrev = NULL;
  /* delete node is first node*/
  if(curr != NULL && curr->data == target){
    if(curr->next != NULL){
      curr->next->prev = NULL;
      head = curr->next;
      curr->next = NULL;
    }
    else{
      head = NULL;
      tail = NULL;
    }
    delete curr;
    return;
  }
  /* otherwise*/
  while(curr != NULL && curr->data != target){
    currPrev = curr;
    curr = curr->next;
  }
  if(curr != NULL){
    currPrev->next = curr->next;
    curr->prev = NULL;
    if(curr->next != NULL) {
      curr->next->prev = currPrev;
    }
    else{
      tail = currPrev;
    }
    curr->next = NULL;
  }
  delete curr;
}

void PrintHeadToTail(Node* &head){
  if(head == NULL) cout << "Stack is empty" << '\n';
  else{
    cout << "Traverse Head to Tail : \n";
    Node* temp = head;
    while(temp != NULL){
      cout << temp->data << "\n";
      temp = temp->next;
    }
  }
}

void PrintTailToHead(Node* &tail){
  if(tail == NULL) cout << "Stack is empty" << '\n';
  else{
    cout << "Traverse Tail to Head : \n";
    Node* temp = tail;
    while(temp != NULL){
      cout << temp->data << "\n";
      temp = temp->prev;
    }
  }
}

void PrintHeadTail(Node* &head, Node* &tail){
  if(head != NULL && tail != NULL){
    cout << "Head : " << head->data << " Tail: " << tail->data << "\n";
  }
  else cout << "Stack is empty" << '\n';
}

int main() {
  Node* head = NULL;
  Node* tail = NULL;
  
  printf("\n----- Insert Tail----\n");
  InsertAtTail(head, tail, 20);
  InsertAtTail(head, tail, 50);
  InsertAtTail(head, tail, 150);
  PrintHeadToTail(head);
  PrintHeadTail(head, tail);
  
  DeleteAtNode(head, tail, 50);
  PrintHeadToTail(head);
  PrintTailToHead(tail);
  PrintHeadTail(head, tail);
  return 0;
}
```

### Insertion Doubly Linked List

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

void InsertAtTail(Node* &tail, int data){
  /*O(1)*/
  Node* new_node = new Node(data);
  if(tail == NULL){
    new_node->next = new_node;
    tail = new_node;
  }
  else{
    new_node->next = tail->next;
    tail->next = new_node;
    tail = new_node;
  }
}

void InsertAfterElement(Node* &tail, int element, int data){
  /*O(1)*/
  Node* new_node = new Node(data);
  if(tail == NULL){
    new_node->next = new_node;
    tail = new_node;
  }
  else{
    Node* curr = tail->next;
    while(curr->data != element && curr != tail){
       curr = curr->next;
    }
    if(curr->data == element){
       new_node->next = curr->next;
       curr->next = new_node;
       if(tail == curr) tail = new_node;
    }
    else{
      cout << "Not Found: " << element << "\n";
    }
  }
}

void Print(Node* &tail){
  Node* tmp = tail;
  do{
     tmp = tmp->next;
     cout << tmp->data << "\n";
  }while(tmp != tail);
}

int main() {
  Node* tail = NULL;
  
  printf("----- Insert Tail----\n");
  InsertAtTail(tail, 20);
  InsertAtTail(tail, 50);
  InsertAtTail(tail, 70);
  Print(tail);
  cout << "Head : " << tail->next->data << " Tail: " << tail->data << "\n";
  
  printf("----- Insert After Element----\n");
  InsertAfterElement(tail, 20, 30);
  InsertAfterElement(tail, 70, 90);
  InsertAfterElement(tail, 20, 10);
  Print(tail);
  cout << "Head : " << tail->next->data << " Tail: " << tail->data << "\n";
  return 0;
}
```
