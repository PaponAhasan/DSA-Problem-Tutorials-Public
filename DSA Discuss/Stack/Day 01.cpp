// with pointer (array)

#include <bits/stdc++.h>
using namespace std;

#define MAX 5

class Stack{
    public:
      int top;
      int data[MAX];
};

void Push(Stack *s, int item){
    
    if(s->top == MAX) printf("Stack is Full\n");
    
    else{
        s->data[ s->top ] = item;
        s->top = s->top + 1;
    }
}

int Pop(Stack *s){
    
    if(s->top == 0){
        printf("Stack is empty\n");
        return -1;
    }
    
    s->top= s->top - 1;
    
    return s->data[s->top];
}

int main() {
	
	Stack my_stack;
	int item;
	
	my_stack.top = 0;
	
	Push(&my_stack, 10);
	Push(&my_stack, 20);
	
	item = Pop(&my_stack);
	printf("%d\n", item);
	
	item = Pop(&my_stack);
	printf("%d\n", item);
	
	item = Pop(&my_stack);
	printf("%d\n", item);
	
	return 0;
}

// with out pointer (array)

#include <bits/stdc++.h>
using namespace std;

#define MAX 5

int top = 0;

void Push(int data[], int item){
    
    if(top == MAX) printf("Stack is Full\n");
    
    else{
        data[ top ] = item;
        top = top + 1;
    }
}

int Pop(int data[]){
    
    if(top == 0){
        printf("Stack is empty\n");
        return -1;
    }
    
    top = top - 1;
    
    return data[top];
}

int main() {
	
    int data[MAX];
    
    Push(data, 10);
    Push(data, 20);
    
    int item = Pop(data);
	printf("%d\n", item);
	
	item = Pop(data);
	printf("%d\n", item);
	
	return 0;
}
