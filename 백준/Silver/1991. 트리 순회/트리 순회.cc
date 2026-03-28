#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <queue>
#include <cmath>
#include <map>
#include <set>

using namespace std;

struct Node{
    char data;
    Node* left;
    Node* right;
    Node(char d) : data(d), left(nullptr), right(nullptr) {}
};
class Tree{
private:
    map<char,Node*> nodes;
public:
    Node* root;

    Tree() : root(nullptr) {}
    void insert(char parent, char left, char right){
        if(nodes.find(parent) == nodes.end())
            nodes[parent] = new Node(parent);
        if(left != '.'){
            if(nodes.find(left) == nodes.end()){
                nodes[left] = new Node(left);
            }
            nodes[parent]->left = nodes[left];
        }
        if(right != '.'){
            if(nodes.find(right) == nodes.end()){
                nodes[right] = new Node(right);
            }
            nodes[parent]->right= nodes[right];
        }
    }

    void setRoot(char r) {
        root = nodes[r];
    }

    
};
void preorder(Node* node){
    if(node == nullptr) return;
    cout << node->data;
    preorder(node->left);
    preorder(node->right);
}

void inorder(Node* node){
    if(node == nullptr) return;
    inorder(node->left);
    cout << node->data;
    inorder(node->right);
}

void postorder(Node* node){
    if(node ==nullptr) return;
    postorder(node->left);
    postorder(node->right);
    cout << node->data;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N; cin >> N;
    Tree t;
    for(int i =0;i <N;i++){
        char p,l,r;
        cin >> p >> l >> r;
        t.insert(p,l,r);
    }
    
    t.setRoot('A');
    preorder(t.root);
    cout << "\n";
    inorder(t.root);
    cout << "\n";
    postorder(t.root);
}