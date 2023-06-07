#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int data) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node* insertNode(struct node *root, int data) {
    if(root == NULL) {
        root = createNode(data);
    } else if(data <= root->data) {
        root->left = insertNode(root->left, data);
    } else {
        root->right = insertNode(root->right, data);
    }
    return root;
}

struct node* searchNode(struct node *root, int data) {
    if(root == NULL) {
        return NULL;
    } else if(root->data == data) {
        return root;
    } else if(data <= root->data) {
        return searchNode(root->left, data);
    } else {
        return searchNode(root->right, data);
    }
}

void inorderTraversal(struct node *root) {
    if(root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    printf("%d -> ", root->data);
    inorderTraversal(root->right);
}

void preorderTraversal(struct node *root) {
    if(root == NULL) {
        return;
    }
    printf("%d -> ", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(struct node *root) {
    if(root == NULL) {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d -> ", root->data);
}
struct node *min(struct node *root){
    if(root==NULL){
        printf("min value node doesnt exist");
        return NULL;
    }
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
struct node *max(struct node *root){
    if(root==NULL){
        printf("min value node doesnt exist");
        return NULL;
    }
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}
int main() {
    struct node *root = NULL;
    root = insertNode(root, 10);
    root = insertNode(root, 8);
    root = insertNode(root, 12);
    root = insertNode(root, 6);
    root = insertNode(root, 9);
    root = insertNode(root, 11);
    root = insertNode(root, 14);
    
    printf("Inorder traversal: ");
    inorderTraversal(root);
    printf("\n");
    
    printf("Preorder traversal: ");
    preorderTraversal(root);
    printf("\n");
    
    printf("Postorder traversal: ");
    postorderTraversal(root);
    printf("\n");
    
    struct node *searchResult = searchNode(root, 9);
    if(searchResult == NULL) {
        printf("Value not found in the tree.\n");
    } else {
        printf("Value found in the tree.\n");
    }
    
    struct node *m=min(root);
    printf("\n min value node is %d",m->data);
    struct node *n=max(root);
    printf("\n max value node is %d",n->data);
    return 0;
}
