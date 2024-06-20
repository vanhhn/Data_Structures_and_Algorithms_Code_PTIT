#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
struct TreeNode{
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x):val(x),left(NULL),right(NULL){}
};
TreeNode* creatTree(vector<int>nums){
      if(nums.size()==0){
        return NULL;
      }
      TreeNode* root=new TreeNode(nums[0]);
      queue<TreeNode*>q;
      q.push(root);
      int id=1;
      while(q.size()&&id<nums.size()){
        TreeNode* cur=q.front();
        q.pop();
        if(nums[id]!=-1){
            cur->left=new TreeNode(nums[id]);
            q.push(cur->left);
        }
        id++;
        if(id<nums.size()&&nums[id]!=-1){
            cur->right=new TreeNode(nums[id]);
            q.push(cur->right);
        }
        id++;
      }
      return root;
}
void sovle(TreeNode* root){
   if(!root) return;
   queue<TreeNode*>q;
   q.push(root);
   while(q.size()){
    int size=q.size();
    for(int i=0;i<size;i++){
    TreeNode* cur=q.front();
    q.pop();
    cout<<cur->val<<" ";
    if(cur->left){
        q.push(cur->left);
    }
    if(cur->right){
        q.push(cur->right);
    }  
   }
   cout<<'\n';
   }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>nums;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            nums.push_back(x);
        }
        TreeNode* root = creatTree(nums);
        sovle(root);
    }
    return 0;
}