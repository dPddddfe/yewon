#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int x) {
        val = x;
        left = right = nullptr;
    }
};

TreeNode* buildTree(const vector<int>& nums) {
    if (nums.empty()) return nullptr;
    TreeNode* root = new TreeNode(nums[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while (i < nums.size()) {
        TreeNode* curr = q.front(); q.pop();
        if (nums[i] != 0) {
            curr->left = new TreeNode(nums[i]);
            q.push(curr->left);
        }
        i++;
        if (i < nums.size() && nums[i] != 0) {
            curr->right = new TreeNode(nums[i]);
            q.push(curr->right);
        }
        i++;
    }
    return root;
}

void preorder(TreeNode* node) {
    if (!node) return;
    cout << node->val << " ";
    preorder(node->left);
    preorder(node->right);
}

void postorder(TreeNode* node) {
    if (!node) return;
    postorder(node->left);
    postorder(node->right);
    cout << node->val << " ";
}

int main() {
    int n;
    int method;
    cin >> n >> method;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    TreeNode* root = buildTree(nums);

    cout << method << " traversal: ";
    if (method == 1)
        preorder(root);
    else if (method == 2)
        postorder(root);
    else
        cout << "Invalid method!";
    
    cout << endl;
    return 0;
}
