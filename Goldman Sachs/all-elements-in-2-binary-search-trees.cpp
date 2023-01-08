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

    void inorder(TreeNode* root, vector<int> &v){
        if(root == NULL){
            return;
        }

        inorder(root->left , v);
        v.push_back(root->val);
        inorder(root->right , v);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> a;
        vector<int> b;

        inorder(root1 , a);
        inorder(root2 , b);

        vector<int> result;

        for(int i=0;i<a.size();i++){
            result.push_back(a[i]);
        }

        for(int i=0;i<b.size();i++){
            result.push_back(b[i]);
        }

        sort(result.begin() , result.end());

        return result;
    }
};