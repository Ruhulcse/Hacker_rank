#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
void postoder(node *root)
{
    if(root->left!=NULL)
    {
        postoder(root->left);
    }
    if(root->right!=NULL)
    {
        postoder(root->right);
    }
    cout<<root->data<<" ";
    return ;
}
