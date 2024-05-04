#include <iostream>
#include <vector>
#include <queue>

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

void rightView(TreeNode* root) {
    if (!root)
        return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size();
        TreeNode* temp = nullptr;

        // Traverse all nodes of current level
        for (int i = 0; i < n; i++) {
            temp = q.front();
            q.pop();

            // Add left node to queue
            if (temp->left)
                q.push(temp->left);

            // Add right node to queue
            if (temp->right)
                q.push(temp->right);
        }

        // temp chứa giá trị cuối cùng của cấp hiện tại
        cout << temp->val << " ";
    }
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

        rightView(root);
        cout << endl;

        delete root;
    }

    return 0;
}