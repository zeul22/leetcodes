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
    void traverse(TreeNode*node,int x,int&l,int&r){
        if(!node){
            return;
        }
        if(node->val!=x){
            traverse(node->left,x,l,r);
            traverse(node->right,x,l,r);
        }
        else{
            l=count_nodes(node->left);
            r=count_nodes(node->right);
        }
    }
    int count_nodes(TreeNode*node){
        if(!node){return 0;}
        int l=count_nodes(node->left);
        int r=count_nodes(node->right);
        return 1+l+r; 
    }
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        int l=0;
        int r=0;
        traverse(root,x,l,r);
        if(l>n/2 || r>n/2) return true;
        if(n-1-l-r>n/2) return true;
        return false;


        
    }
};