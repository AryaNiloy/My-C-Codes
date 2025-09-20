#include<stdio.h>
int main()
{

typedef struct node Node;
struct node{

int data;
Node *next;
};
Node *create_node(int item,Node *next){

Node *new_node=(Node *)malloc)(sizeof(Node));
if(new_node==NULL)
{

printf("Error! Couldnt create a new node\,\n");
exit(1);
}
return new_node;
}




}
