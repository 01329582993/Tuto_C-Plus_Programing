#include <iostream>

struct Node
{
    int data;
    Node *left, *right, *parent;



};
class BST
{
private:
    void tree_insert(Node *root, Node *newNode)
    {
        Node *x = root;
        Node *y = nullptr;

        while(x != nullptr)
        {
            y = x;
            if(newNode->data < x->data)
            {
                x = x->left;
            }
            else
            {
                x=  x->right;
            }
        }

        newNode->parent = y;
        if(y == nullptr)
        {
            root = newNode;
        }
        else if(newNode->data < y->data)
        {
            y->left = newNode;
        }
        else
        {
            y->right = newNode;
        }

    }



}
