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

    void numb(TreeNode* root,vector<int>& arr)
    {
        if(!root)return;
        arr.push_back(root->val);
        numb(root->left,arr);
        numb(root->right,arr);
        
    }
    bool findTarget(TreeNode* root, int k) {
        TreeNode* tmp=root;
        vector<int>num; 
        numb(root,num);
        sort(num.begin(),num.end());
        for(int i=0,j=num.size()-1;i<j;)
        {
            if(num[i]+num[j]==k)
            {
                return true;
            }
            else if(num[i]+num[j]>k) j--;
            else if(num[i]+num[j]<k) i++;
        }
        return false;
    }
};