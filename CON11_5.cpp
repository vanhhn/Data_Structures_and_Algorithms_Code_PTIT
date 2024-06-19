#include <bits/stdc++.h>

using namespace std;

vector<int> spiralOrderTraversal(int root, unordered_map<int, vector<pair<int, char>>>& tree) {
    vector<int> result;
    if (tree.find(root) == tree.end()) {
        return result;
    }
    
    stack<int> s1; // Duyệt từ phải sang trái
    stack<int> s2; // Duyệt từ trái sang phải
    
    s1.push(root);
    
    while (!s1.empty() || !s2.empty()) {
        while (!s1.empty()) {
            int node = s1.top();
            s1.pop();
            result.push_back(node);
            
            for (auto it = tree[node].rbegin(); it != tree[node].rend(); ++it) {
                if (it->second == 'L') {
                    s2.push(it->first);
                } else {
                    s2.push(it->first);
                }
            }
        }
        
        while (!s2.empty()) {
            int node = s2.top();
            s2.pop();
            result.push_back(node);
            
            for (auto it = tree[node].begin(); it != tree[node].end(); ++it) {
                if (it->second == 'L') {
                    s1.push(it->first);
                } else {
                    s1.push(it->first);
                }
            }
        }
    }
    
    return result;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        unordered_map<int, vector<pair<int, char>>> tree;
        unordered_set<int> children;
        int root = -1;
        
        for (int i = 0; i < N; ++i) {
            int u, v;
            char x;
            cin >> u >> v >> x;
            tree[u].push_back({v, x});
            children.insert(v);
        }
        
        for (const auto& node : tree) {
            if (children.find(node.first) == children.end()) {
                root = node.first;
                break;
            }
        }
        
        vector<int> result = spiralOrderTraversal(root, tree);
        
        for (int val : result) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}