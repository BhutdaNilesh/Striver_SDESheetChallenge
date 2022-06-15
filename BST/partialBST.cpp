/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
void inorder(BinaryTreeNode<int>* root, vector<int>&res){
    if(!root) return;
    inorder(root->left, res);
    res.push_back(root->data);
    inorder(root->right,res);
}
bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    
    vector<int>res;
    inorder(root, res);
    
    int n=res.size();
    for(int i=0;i<n-1;i++){
        if(res[i]>res[i+1]){
            return false;
        }
    }
    return true;
    
}