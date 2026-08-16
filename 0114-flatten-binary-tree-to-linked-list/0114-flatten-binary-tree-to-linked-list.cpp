/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void preorder(TreeNode* root,TreeNode* &head,TreeNode* &last)
    {
        if(root==NULL)return ;
        TreeNode* nw = new TreeNode(root->val);

        //nw->left=NULL;
        //nw->right=NULL;
        //nw->val=root->val;

        if(head==NULL)head=nw;

        else last->right=nw;
        last=nw;
        preorder(root->left,head,last);
        preorder(root->right,head,last);
    }

    void flatten(TreeNode* root) {
        TreeNode* head=NULL,*last=NULL;
        preorder(root,head,last);

        TreeNode*curr=root;
        TreeNode*temp=head;

        while (temp!=NULL) 
        {
            curr->val=temp->val;
            curr->left=NULL;
            curr->right=temp->right;
            curr=curr->right;
            temp=temp->right;
        }
    }
};