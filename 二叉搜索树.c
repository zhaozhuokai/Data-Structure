#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* root = NULL;

struct TreeNode* CreateNewNode(int val){
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct TreeNode* Insert(struct TreeNode* root, int val){
    // 如果树为空，创建一个新节点
    if(root == NULL){
        root = CreateNewNode(val);
        return root;
    }
    // 如果树不为空
    else if(val < root->val){
        root->left = Insert(root->left, val);
    }
    else{
        root->right = Insert(root->right, val);
    }
    return root;
}

bool Search(struct TreeNode* root, int val){
    if(root == NULL){
        return false;
    }
    else if(root->val == val){
        return true;
    }
    else if(val < root->val){
        return Search(root->left, val);
    }
    else{
        return Search(root->right, val);
    }
}

int main(){
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);
    int number;
    printf("Enter number to be searched\n");
    scanf("%d", &number);
    if(Search(root, number) == true){
        printf("Found\n");
    }
    else{
        printf("Not Found\n");
    }
    return 0;
}