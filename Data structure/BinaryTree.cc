#include <iostream>
#include <queue>
using namespace std;

struct binaryTree;
struct treeNode{
    treeNode *leftchild;
    treeNode *rightchild;
    treeNode *parent;
    string str;
    treeNode(string s);
};

treeNode::treeNode(string s)
    :leftchild{0},rightchild{0},parent{0},str{s}
    {}

struct binaryTree{
    treeNode *root; //just like linkedlist "first"
    binaryTree(treeNode *node);

    void preOrder(treeNode *current);
    void inOrder(treeNode *current);
    void postOrder(treeNode *current);
    void levelOrder();
};

binaryTree::binaryTree(treeNode *node)
    :root{node}
    {}


void binaryTree::preOrder(treeNode *current){//先V再L再R
    if(current){
        cout << current->str;
        preOrder(current->leftchild);
        preOrder(current->rightchild);
    }
}

void binaryTree::inOrder(treeNode *current){
    if(current){
        inOrder(current->leftchild);
        cout << current->str;
        inOrder(current->rightchild);
    }
}

void binaryTree::postOrder(treeNode *current){
    if(current){
        postOrder(current->leftchild);
        postOrder(current->rightchild);
        cout << current->str;
    }
}

void binaryTree::levelOrder(){
    queue<treeNode *> q;
    q.push(root);

    while(!q.empty()){
        treeNode *current = q.front();
        cout << current->str;
        q.pop();
        

        if(current->leftchild != nullptr){
            q.push(current->leftchild);
        }
        if(current->rightchild != nullptr){
            q.push(current->rightchild);
        }
    }
}


int main(){
    //treeNode instantiation 實例化
    treeNode *nodeA = new treeNode("A");
    treeNode *nodeB = new treeNode("B");
    treeNode *nodeC = new treeNode("C");
    treeNode *nodeD = new treeNode("D");
    treeNode *nodeE = new treeNode("E");
    treeNode *nodeF = new treeNode("F");
    treeNode *nodeG = new treeNode("G");
    treeNode *nodeH = new treeNode("H");
    treeNode *nodeI = new treeNode("I");
    //這裡也可以不要使用new，可以使用
    //TreeNode nodeA = TreeNode("A");
    //TreeNode *nodeA = &nodeA;

    //construct the binary tree
    nodeA->leftchild = nodeB; nodeA->rightchild = nodeC;
    nodeB->leftchild = nodeD; nodeB->rightchild = nodeE;
    nodeC->leftchild = nodeF; nodeF->rightchild = nodeI;
    nodeE->leftchild = nodeG; nodeE->rightchild = nodeH;

    binaryTree T(nodeA);

    T.preOrder(T.root);//問：是不是也可以放nodeA?ans:可以
    cout << "\n";
    T.inOrder(T.root);
    cout << "\n";
    T.postOrder(T.root);
    cout << "\n";
    T.levelOrder();
    return 0;
}