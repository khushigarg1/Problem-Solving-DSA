#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;
struct node *createNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void insert(int data)
{
    struct node *newNode = createNode(data);

    if (root == NULL)
    {
        root = newNode;
        return;
    }
    else
    {
        struct node *current = root, *parent = NULL;

        while (true)
        {
            parent = current;

            if (data < current->data)
            {
                current = current->left;
                if (current == NULL)
                {
                    parent->left = newNode;
                    return;
                }
            }
            else
            {
                current = current->right;
                if (current == NULL)
                {
                    parent->right = newNode;
                    return;
                }
            }
        }
    }
}

struct node *minNode(struct node *root)
{
    if (root->left != NULL)
        return minNode(root->left);
    else
        return root;
}

struct node *deleteNode(struct node *node, int value)
{
    if (node == NULL)
    {
        printf("\nTree is empty!\n");
    }
    else
    {
        if (value < node->data)
            node->left = deleteNode(node->left, value);

        else if (value > node->data)
            node->right = deleteNode(node->right, value);

        else
        {
            if (node->left == NULL && node->right == NULL)
                node = NULL;

            else if (node->left == NULL)
            {
                node = node->right;
            }
            else if (node->right == NULL)
            {
                node = node->left;
            }

            else
            {
                struct node *temp = minNode(node->right);
                node->data = temp->data;
                node->right = deleteNode(node->right, temp->data);
            }
        }
        return node;
    }
}

void inorderTraversal(struct node *node)
{

    if (root == NULL)
    {
        printf("Tree is empty\n");
        return;
    }
    else
    {
        if (node->left != NULL)
            inorderTraversal(node->left);
        printf("%d ", node->data);
        if (node->right != NULL)
            inorderTraversal(node->right);
    }
}
void preorderTraversal(struct node *node)
{

    if (root == NULL)
    {
        printf("Tree is empty\n");
        return;
    }
    else
    {
        printf("%d ", node->data);
        if (node->left != NULL)
            preorderTraversal(node->left);
        if (node->right != NULL)
            preorderTraversal(node->right);
    }
}

void postorderTraversal(struct node *node)
{

    if (root == NULL)
    {
        printf("Tree is empty\n");
        return;
    }
    else
    {
        if (node->left != NULL)
            postorderTraversal(node->left);
        if (node->right != NULL)
            postorderTraversal(node->right);
        printf("%d ", node->data);
    }
}

// void levelorderTraversal(node *root)
// {
//     if(root == nullptr)
//     {
//         cout << "underflow "<<endl;
//         return;
//     }
//     queue <node* > q;
//     q.push(root);
//     // cout << root->data << " ";
//     while (!q.empty())
//     {
//         root = q.front();
//         cout << root->data << " ";
//         q.pop();
//         if(root->left)
//         {
//             // cout << root->left->data << " ";
//             q.push(root->left);
//         }
//         if(root->right)
//         {
//             // cout << root->right->data << " ";
//             q.push(root->right);
//         }
//     }
// }

int main()
{
    int choice;
    int insertValue, deleteValue;
    while (1)
    {
        printf("\n1 - Insertion\n2 - Deletion\n3 - Inoreder Traversal\n4 - Preoreder Traversal\n5 - Postorder Traversal\n6 - Levelorder Traversal\n7 - Quit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data to be inserted : ");
            scanf("%d", &insertValue);
            insert(insertValue);
            break;

        case 2:
            printf("Enter the data to be deleted : ");
            scanf("%d", &deleteValue);
            struct node *deletedNode = deleteNode(root, deleteValue);
            break;

        case 3:
            printf("\n");
            inorderTraversal(root);
            break;

        case 4:
            printf("\n");
            preorderTraversal(root);
            break;

        case 5:
            printf("\n");
            postorderTraversal(root);
            break;

        case 6:
            printf("\n");
            levelorederTraversal(root);
            break;

        case 7:
            exit(1);
            break;

        default:
            printf("Wrong Choice !!!");
            break;
        }
    }
    return 0;
}