#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

struct node* search(struct node *root, int x){
    if(root == NULL || root->data==x){
        return root;
    }
    else if(x > root->data){
        return search(root->right,x);
    }
    else{
        return search(root->left,x);
    }
}

struct node *find_min(struct node *root){
    if(root == NULL){
        return NULL;
    }
    else if(root->left != NULL){
        return find_min(root->left);
    }
    else{
        return find_min(root->right);
    }
}

struct node *newNode(int x){
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = x;
    n->left = NULL;
    n->right = NULL;

    return n;
}

struct node *insert(struct node *root, int x){
    if(root== NULL){
        return newNode(x);
    }
    else if(x > root->data){
        root->right = insert(root->right,x);
    }
    else{
        root->left = insert(root->left,x);
    }

    return root;
}

// Inorder Traversal :::

void inorder(struct node *root){
    if(root != NULL){
        inorder(root->left);
        printf(" %d ", root->data);
        inorder(root->right);
    }
}

void pre_order(struct node *root){
    if(root != NULL){
        printf(" %d ", root->data);
        pre_order(root->left);
        pre_order(root->right);
    }
}

void post_order(struct node *root){
    if(root != NULL){
        post_order(root->left);
        post_order(root->right);
        printf(" %d ", root->data);
    }
}

int main(){
    struct node *root;
    root = newNode(20);
    insert(root,3);
    insert(root,5);
    insert(root,1);
    insert(root,15);
    insert(root,9);
    insert(root,7);
    insert(root,12);
    insert(root,30);
    insert(root,25);
    insert(root,40);
    insert(root, 45);
    insert(root, 42);

    pre_order(root);
    
    printf("\n");

    return 0;
}