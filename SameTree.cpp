lass Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        //If both the nodes are NULL
        if(p==NULL && q==NULL) return true;

        //One of them is NULL
        if(p==NULL || q==NULL) return false;

        return (p->val==q->val) && isSameTree(p->left,q->left) 
        && isSameTree(p->right,q->right);
    }
};
