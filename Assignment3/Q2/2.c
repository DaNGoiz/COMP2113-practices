#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct treeNode {
    int key;
    struct treeNode *left;
    struct treeNode *right;
};

typedef struct treeNode treeNode;

treeNode * Insert(treeNode * currentNode, int key) {
    if (currentNode == NULL) {
        // Case 1: If the tree rooted at currentNode is empty
        // To be implemented
        currentNode = (treeNode *)malloc(sizeof(treeNode));
        currentNode->key = key;
        currentNode->left = NULL;
        currentNode->right = NULL;
    }
    if (key > (currentNode -> key)) {
        // Case 2: If the tree rooted at currentNode is not empty and if the given key is greater than currentNode -> key
        // To be implemented
        if (currentNode->right != NULL)
            Insert(currentNode->right, key);
        else {
            currentNode->right = (treeNode *)malloc(sizeof(treeNode));
            currentNode->right->key = key;
            currentNode->right->left = NULL;
            currentNode->right->right = NULL;
        }
    }
    else if (key < (currentNode -> key)) {
        // Case 3: If the tree rooted at currentNode is not empty and if the given key is smaller than currentNode -> key
        // To be implemented
        if (currentNode->left != NULL)
            Insert(currentNode->left, key);
        else {
            currentNode->left = (treeNode *)malloc(sizeof(treeNode));
            currentNode->left->key = key;
            currentNode->left->left = NULL;
            currentNode->left->right = NULL;
        }
    }
    return currentNode;
}

void Print(treeNode *currentNode){
    if(currentNode ==NULL){
        return;
    }
    Print(currentNode->left);
    printf("%d ", currentNode->key);
    Print(currentNode->right);
}

treeNode * FindMin(treeNode *currentNode) {
    if (currentNode == NULL)
        return NULL;
    if (currentNode->left == NULL)
        return currentNode;
    else
        return FindMin(currentNode->left);
}

treeNode * FindMax(treeNode *currentNode) {
    if (currentNode == NULL)
        return NULL;
    if (currentNode->right == NULL)
        return currentNode;
    else
        return FindMax(currentNode->right);
}

treeNode * Find(treeNode * currentNode, int key) {
    // To be implemented
    if (currentNode == NULL)
        return NULL;
    if (currentNode->key == key)
        return currentNode;
    else if (key < currentNode->key)
        return Find(currentNode->left, key);
    else
        return Find(currentNode->right, key);
}


int main() {
    treeNode *root = NULL;

    char command[30];
    int value;
    scanf("%s", command);
    while (strcmp(command, "End") != 0) {
        if (strcmp(command, "Insert") == 0) {
            scanf("%d", &value);
            root = Insert(root, value);
        }
        else if (strcmp(command, "Find") == 0) {
            scanf("%d", &value);
            treeNode * temp;
            temp = Find(root, value);
            if (temp == NULL)
                printf("Element %d not found\n", value);
            else
                printf("Element %d found\n", value);
        }
        else if (strcmp(command, "Print") == 0) {
            Print(root);
            putchar('\n');
        }
        else if (strcmp(command, "FindMin") == 0) {
            treeNode * temp;
            temp = FindMin(root);
            printf("Minimum element is %d\n", temp -> key);
        }
        else if (strcmp(command, "FindMax") == 0) {
            treeNode * temp;
            temp = FindMax(root);
            printf("Maximum element is %d\n", temp -> key);
        }
        scanf("%s", command);
    }
}
