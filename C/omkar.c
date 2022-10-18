/ node *reverse(node *head)
// {
//     node cur = head;
//     node prev = null;
//     while (curr != Null)
//     {
//         node temp = cur->next;
//         cur->next = prev;
//         prev = cur;
//         cur = temp;
//     }
//     return prev;
// }

// #define N 5
// int queue[N];
// int front = -1;
// int rear = -1;
// void enqueue(int x)
// {
//     if (rear == N - 1)
//     {
//         printf("overflow");
//         return;
//     }
//     if (front == -1 && rear == -1)
//     {
//         front = rear = 0;
//         queue[rear] = x;
//         return;
//     }
//     rear++;
//     queue[rear] = x;
//     count++;
// }

// // we can avoid it filling by putting front = front + 1 mod N

// void dequeue(int x)
// {
//     if (front == -1 and rear == -1)
//     {
//         printf("Empty") return;
//     }
//     if (front == rear)
//     {
//         front = rear = -1;
//         return;
//     }
//     printf("The removed element is %d", queue[front]);
//     front++;
// }

// void display()
// {
//     if (front == -1 and rear == -1)
//     {
//         printf("Empty") return;
//     }
//     for (int i = front; i <= rear; i++)
//     {
//         printf("%d", queue[i]);
//     }
// }

// void peek()
// {
//     if (front == -1 and rear == -1)
//     {
//         printf("Empty") return;
//     }
//     printf("the data at front is %d", queue[front]);
// }

// struct node
// {
//     int data;
//     struct node *next;

// } *front = NULL, *rear = NULL;

// void enqueue(int x)
// {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     newnode->data = x;
//     newnode->next = 0;
//     if (front == NULL and rear == NULL)
//     {
//         front = rear = newnode;
//         return;
//     }
//     rear->next = newnode;
//     rear = newnode;
// }

// void display()
// {

//     if ()

//         struct node *temp = front;
//     while (temp != NUll)
//     {
//         printf("%d", temp->data);
//         temp = temp->next;
//     }
// }

// void dequeue()
// {
//     if ()

//         temp = front;
//     front = front->next;
//     free(temp);
// }

// void peek()
// {
//     printf("%d", front->data);
// }

// ******************//

// C program to convert infix expression to postfix

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // Stack type
// struct Stack {
//     int top;
//     unsigned capacity;
//     int* array;
// };

// // Stack Operations
// struct Stack* createStack(unsigned capacity)
// {
//     struct Stack* stack
//         = (struct Stack*)malloc(sizeof(struct Stack));

//     if (!stack)
//         return NULL;

//     stack->top = -1;
//     stack->capacity = capacity;

//     stack->array
//         = (int*)malloc(stack->capacity * sizeof(int));

//     return stack;
// }

// int isEmpty(struct Stack* stack)
// {
//     return stack->top == -1;
// }

// char peek(struct Stack* stack)
// {
//     return stack->array[stack->top];
// }

// char pop(struct Stack* stack)
// {
//     if (!isEmpty(stack))
//         return stack->array[stack->top--];
//     return '$';
// }

// void push(struct Stack* stack, char op)
// {
//     stack->array[++stack->top] = op;
// }

// // A utility function to check if
// // the given character is operand
// int isOperand(char ch)
// {
//     return (ch >= 'a' && ch <= 'z')
//            || (ch >= 'A' && ch <= 'Z');
// }

// // A utility function to return
// // precedence of a given operator
// // Higher returned value means
// // higher precedence
// int Prec(char ch)
// {
//     switch (ch) {
//     case '+':
//     case '-':
//         return 1;

//     case '*':
//     case '/':
//         return 2;

//     case '^':
//         return 3;
//     }
//     return -1;
// }

// // The main function that
// // converts given infix expression
// // to postfix expression.
// int infixToPostfix(char* exp)
// {
//     int i, k;

//     // Create a stack of capacity
//     // equal to expression size
//     struct Stack* stack = createStack(strlen(exp));
//     if (!stack) // See if stack was created successfully
//         return -1;

//     for (i = 0, k = -1; exp[i]; ++i) {

//         // If the scanned character is
//         // an operand, add it to output.
//         if (isOperand(exp[i]))
//             exp[++k] = exp[i];

//         // If the scanned character is an
//         // ‘(‘, push it to the stack.
//         else if (exp[i] == '(')
//             push(stack, exp[i]);

//         // If the scanned character is an ‘)’,
//         // pop and output from the stack
//         // until an ‘(‘ is encountered.
//         else if (exp[i] == ')') {
//             while (!isEmpty(stack) && peek(stack) != '(')
//                 exp[++k] = pop(stack);
//             if (!isEmpty(stack) && peek(stack) != '(')
//                 return -1; // invalid expression
//             else
//                 pop(stack);
//         }

//         else // an operator is encountered
//         {
//             while (!isEmpty(stack)
//                    && Prec(exp[i]) <= Prec(peek(stack)))
//                 exp[++k] = pop(stack);
//             push(stack, exp[i]);
//         }
//     }

//     // pop all the operators from the stack
//     while (!isEmpty(stack))
//         exp[++k] = pop(stack);

//     exp[++k] = '\0';
//     printf("%s", exp);
// }

// // Driver's code
// int main()
// {
//     char exp[] = "a+b*(c^d-e)^(f+g*h)-i";

//       // Function call
//     infixToPostfix(exp);
//     return 0;
// }

// *************

#include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <math.h>

// #define N 100
// int stack[N];
// int top = -1;

// void push()
// {
//     int data;
//     printf("Enter data to be pushed : ");
//     scanf("%d", &data);
//     if (top == N - 1)
//     {
//         printf("THe stack is full!!\n");
//         return;
//     }
//     top++;
//     stack[top] = data;
// }
// void pop()
// {
//     if (top == -1)
//     {
//         printf("UnderFlow : The stack is empty!!\n");
//         return;
//     }
//     printf("The popped element is %d\n", stack[top]);
//     top--;
// }

// void display()
// {
//     if (top == -1)
//     {
//         printf("The stack is empty!!\n");
//         return;
//     }
//     printf("THe elements in the stack are : ");
//     for (int i = top; i >= 0; i--)
//     {
//         printf("%d ", stack[i]);
//     }
//     printf("\n");
// }

// void peek()
// {
//     if (top == -1)
//     {
//         printf("The stack is empty!!\n");
//         return;
//     }
//     printf("THe top element is %d\n", stack[top]);
// }

// void isEmpty()
// {
//     if (top == -1)
//     {
//         printf("THe stack is empty\n");
//         return;
//     }
//     printf("THe stack is not empty with %d elements in it\n", top + 1);
// }

// int main()
// {
//     while (1)
//     {
//         int choice;
//         int info;
//         printf("1 - Push");
//         printf("\n 2 - Pop");
//         printf("\n 3 - Peek");
//         printf("\n 4 - Check if Empty");
//         printf("\n 5 - Exit");
//         printf("\n 6 - Dipslay");
//         printf("\n 7 - Stack Count");
//         printf("\nEnter your choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             push();
//             break;
//         case 2:
//             pop();
//             break;
//         case 3:
//             peek();
//             break;
//         case 4:
//             isEmpty();
//             break;
//         case 5:
//             exit(0);
//         case 6:
//             display();
//             break;
//         case 7:
//             printf("THe number of elements in stack is %d\n", top + 1);
//             break;
//         default:
//             printf(" Wrong choice, Please enter correct choice\n");
//             break;
//         }
//     }
//     return 0;
// }

// ***********
#include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <math.h>

// struct node
// {
//     int data;
//     struct node *next;
// } * top;

// int count = 0;

// void push(int data)
// {
//     struct node *newnode = (struct node *)malloc(sizeof(struct node));
//     newnode->data = data;
//     newnode->next = top;
//     top = newnode;
//     count++;
// }

// void display()
// {
//     if (top == NULL)
//     {
//         printf("Stack is empty!!\n");
//         return;
//     }
//     printf("The elements in the stack are : ");
//     struct node *temp = top;
//     while (temp != NULL)
//     {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }

// void peek()
// {
//     if (top == NULL)
//     {
//         printf("Stack is empty!!\n");
//         return;
//     }
//     printf("Top element is %d\n", top->data);
// }

// void pop()
// {
//     struct node *temp = top;
//     if (temp == NULL)
//     {
//         printf("The stack is empty\n");
//         return;
//     }
//     printf("The popped element is %d\n", temp->data);
//     top = temp->next;
//     free(temp);
//     count--;
// }
// void stack_count()
// {
//     printf("The number of elements is %d\n", count);
// }

// void isEmpty()
// {
//     if (top == NULL)
//     {
//         printf("The stack is empty!\n");
//     }
//     else
//     {
//         printf("THe stack is not empty with %d elements\n", count);
//     }
// }

// int main()
// {
//     top = NULL;
//     // push(2);
//     // push(3);
//     // push(678);
//     // display();
//     // peek();
//     // pop();
//     // display();
//     // stack_count();
//     while (1)
//     {
//         int choice;
//         int info;
//         printf("1 - Push");
//         printf("\n 2 - Pop");
//         printf("\n 3 - Peek");
//         printf("\n 4 - Check if Empty");
//         printf("\n 5 - Exit");
//         printf("\n 6 - Dipslay");
//         printf("\n 7 - Stack Count");
//         printf("\nEnter your choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             printf("Enter data : ");
//             scanf("%d", &info);
//             push(info);
//             break;
//         case 2:
//             pop();
//             break;
//         case 3:
//             peek();
//             break;
//         case 4:
//             isEmpty();
//             break;
//         case 5:
//             exit(0);
//         case 6:
//             display();
//             break;
//         case 7:
//             stack_count();
//             break;
//         default:
//             printf(" Wrong choice, Please enter correct choice\n");
//             break;
//         }
//     }
//     return 0;
// }