#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void insert(TreeNode* root, int key) {
    queue<TreeNode*> q;
    q.push(root);

    // Do a level order traversal until we find an empty place
    while (!q.empty()) {
        TreeNode* temp = q.front();
        q.pop();

        if (!temp->left) {
            temp->left = new TreeNode(key);
            break;
        } else
            q.push(temp->left);

        if (!temp->right) {
            temp->right = new TreeNode(key);
            break;
        } else
            q.push(temp->right);
    }
}

vector<vector<int>> levelOrderBottom(TreeNode* root) {
    vector<vector<int>> result;

    if (!root)
        return result;

    stack<vector<int>> st;
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size();
        vector<int> levelNodes;

        for (int i = 0; i < n; i++) {
            TreeNode* temp = q.front();
            q.pop();

            levelNodes.push_back(temp->val);

            if (temp->left)
                q.push(temp->left);

            if (temp->right)
                q.push(temp->right);
        }

        st.push(levelNodes);
    }

    while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nodes(n);
        for (int i = 0; i < n; i++) {
            cin >> nodes[i];
        }

        TreeNode* root = new TreeNode(nodes[0]);
        queue<TreeNode*> q;
        q.push(root);
        for (int i = 1; i < n; i++) {
            TreeNode* parent = q.front();
            if (!parent->left) {
                parent->left = new TreeNode(nodes[i]);
                if (nodes[i] != -1) {
                    q.push(parent->left);
                }
            } else if (!parent->right) {
                parent->right = new TreeNode(nodes[i]);
                if (nodes[i] != -1) {
                    q.push(parent->right);
                }
                q.pop();
            }
        }

        vector<vector<int>> result = levelOrderBottom(root);

        for (const auto& level : result) {
            for (const auto& val : level) {
                cout << val << " ";
            }
            cout << endl;
        }

        delete root;
    }

    return 0;
}