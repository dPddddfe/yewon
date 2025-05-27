#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class TreeNode {
public:    
    int val;
    TreeNode *left, *right;
    TreeNode(int x){
        val = x;
        left = right = NULL;
    }
};

// 0은 빈 노드이므로 해당 위치는 NULL로 건너뜀
TreeNode* buildTree(const vector<int>& nums) {
    if (nums.empty() || nums[0] == 0) return NULL;

    TreeNode* root = new TreeNode(nums[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;

    while (i < nums.size()) {
        TreeNode* curr = q.front();
        q.pop();

        // 왼쪽 자식
        if (i < nums.size()) {
            if (nums[i] != 0) {
                curr->left = new TreeNode(nums[i]);
                q.push(curr->left);
            }
            i++;
        }

        // 오른쪽 자식
        if (i < nums.size()) {
            if (nums[i] != 0) {
                curr->right = new TreeNode(nums[i]);
                q.push(curr->right);
            }
            i++;
        }
    }

    return root;
}

// 중위 순회
void printInOrderTree(TreeNode* root) {
    if (!root) return;
    printInOrderTree(root->left);
    cout << root->val << " ";
    printInOrderTree(root->right);
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    TreeNode* root = buildTree(nums);
    printInOrderTree(root);
    cout << endl;

    return 0;
}
