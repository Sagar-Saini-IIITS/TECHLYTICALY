#include <iostream>
using namespace std;
struct Node{
int data;
Node *left;
Node *right;
Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// function to calculate min difference
 int findDifference(Node *root, int x){
     if(!root) return 1e9;
     int ans=x>root->data?x-root->data:root->data-x;
     int l=findDifference(root->left,x);
     int r=findDifference(root->right,x);
     int temp=l<r?l:r;
     return ans<temp?ans:temp;
     }
int main()
{   
   /* Input :
          7
         / \
        5  9
       / \
      2  6       */

    Node* root = new Node(7);
    root ->left = new Node(5);
    root ->right = new Node(9);
    root -> left -> left = new Node(2);
    root -> left -> right = new Node(6);
    cout<<findDifference(root,13);
    return 0;
}
