#include <iostream>
#include <cstdlib>

using namespace std;

// Define the structure for a node in the BST
struct node {
    int value;
    struct node* left;
    struct node* right;
};

// Create a new node for the BST
node* createNewNode(int value) {
    node* newNode = new node();
    newNode->value = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Function to build a balanced BST from a sorted array
node* buildBalancedBST(int arr[], int start, int end) {
    if (start > end) {
        return nullptr;
    }
    int mid = (start + end) / 2;
    node* root = createNewNode(arr[mid]);
    root->left = buildBalancedBST(arr, start, mid - 1);
    root->right = buildBalancedBST(arr, mid + 1, end);
    return root;
}

// Function to find the k-th smallest element in the BST
int kthSmallestElement(node* root, int& k) {
    if (root == nullptr) {
        return -1; // Return -1 if tree is empty
    }
    int left = kthSmallestElement(root->left, k);
    if (left != -1) {
        return left;
    }
    k--;
    if (k == 0) {
        return root->value;
    }
    return kthSmallestElement(root->right, k);
}

// Function to print the BST in inorder traversal
void inorderTraversal(node* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->value << " ";
    inorderTraversal(root->right);
}

// Function to print the binary tree
void printBST(node* root, int space = 0, int count = 5) {
    if (root == nullptr) {
        return;
    }
    space += count;
    printBST(root->right, space);
    cout << endl;
    for (int i = count; i < space; i++) {
        cout << " ";
    }
    cout << root->value << "\n";
    printBST(root->left, space);
}

int main() {
    int arr[] = {6, 17, 20, 41, 45, 52, 57, 65, 71, 76, 79, 87, 92, 95, 99};
    int n = sizeof(arr) / sizeof(arr[0]);
    node* root = buildBalancedBST(arr, 0, n - 1);

    cout << "BST Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Binary Tree:" << endl;
    printBST(root);

    int k;
    cout << "Which smallest element you would like to see: ";
    cin >> k;
    int kthSmallest = kthSmallestElement(root, k);
    if (kthSmallest != -1) {
        cout << "This value is: " << kthSmallest << endl;
    } else {
        cout << "Invalid input or k out of range." << endl;
    }

    return 0;
}
