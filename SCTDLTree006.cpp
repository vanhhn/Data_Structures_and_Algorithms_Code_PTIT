#include<bits/stdc++.h>
using namespace std;
// tao struct luu tree 
struct TreeNode{
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x):val(x),left(NULL),right(NULL){}// tao contructer
};
// ham tim do cao cay
int maxDepth(TreeNode* root){
  if(root==nullptr) return 0;
  int leftDepth=maxDepth(root->left);
  int rightDepth=maxDepth(root->right);
  return max(leftDepth,rightDepth)+1;
}
// ham xay dung cay tu mang node
TreeNode* buildTree(vector<int>&nodes){
  if(nodes.empty()){
    return nullptr;
  }
  TreeNode* root=new TreeNode(nodes[0]);
  queue<TreeNode*>q;
  q.push(root);
  int index=1;
  while(index<nodes.size()){
    TreeNode* cur=q.front();
    q.pop();
    if(index<nodes.size()&&nodes[index]!=-1){
      cur->left=new TreeNode(nodes[index]);
      q.push(cur->left);
    }
    index++;
    if(index<nodes.size()&&nodes[index]!=-1){
      cur->right=new TreeNode(nodes[index]);
      q.push(cur->right);
    }
    index++;
  }
  return root;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>nodes;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      nodes.push_back(x);
    }
    TreeNode* root=buildTree(nodes);
    cout<<maxDepth(root)<<"\n";
  }
  return 0;
}