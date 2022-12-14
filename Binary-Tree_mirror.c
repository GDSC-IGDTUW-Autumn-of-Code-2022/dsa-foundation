#include <stdlib.h>
struct Node {
    int data;
    struct Node *left;
    struct Node *right;

};
int Mirror(struct Node*l,struct Node *r){
    if (l==NULL && r==NULL) {
        return 0;
    }
    if (l==NULL||r==NULL) {
        return -1;
    }

    return l->data==r->data && Mirror(l->left,r->right) && Mirror(l->right,r->left);
}
struct Node* newnode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
     node->data=data;

     node->left=NULL;
     node->right = NULL;

     return (node);
}
int main()
{
    struct  Node *a = newnode(1);
    struct Node *b = newnode(2);
    a->left = newnode(2);
    a->right = newnode(3);
    a->left->left  = newnode(4);
    a->left->right = newnode(4);
 
    b->left = newnode(3);
   
    int result=Mirror(a,b);
    if (result==-1) {
        printf("False");
    }
    else{
        printf("True");
    }
    return 0;
}