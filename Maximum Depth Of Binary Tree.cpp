class Solution{
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {

 if(!root)
 return 0;
 
 int right=maxDepth(root->right);
 int left=maxDepth(root->left);
 
 return max(right,left)+1;
 }
};