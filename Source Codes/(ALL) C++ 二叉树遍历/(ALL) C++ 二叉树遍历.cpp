#include<iostream>
#include<cstdio>
#include<algorithm>
namespace sonNode{
	typedef int dirType;
	constexpr dirType LEFT=1;
	constexpr dirType RIGHT=2; 
}
using namespace std;
using namespace sonNode;
struct binaryTreeNode{
    int value;
    binaryTreeNode *pLeft;
    binaryTreeNode *pRight;
};
binaryTreeNode* addNode(binaryTreeNode *rootNode,int value,dirType dir){
    if (rootNode==nullptr){
        return nullptr;
    }
    binaryTreeNode *pNew=new binaryTreeNode();
    pNew->value=value;
    pNew->pLeft=nullptr;
    pNew->pRight=nullptr;
    if (dir==LEFT){
        rootNode->pLeft=pNew;
    }
    else{
        rootNode->pRight=pNew;
    }
    return pNew;
}
binaryTreeNode *generateBinaryTree(){
	binaryTreeNode *rootNode=new binaryTreeNode();
	rootNode->value=10;
	rootNode->pLeft=nullptr;
	rootNode->pRight=nullptr;
	binaryTreeNode *pNew=addNode(rootNode,6,LEFT);
	addNode(pNew,4,LEFT);
	addNode(pNew,8,RIGHT);
	pNew=addNode(rootNode,14,RIGHT);
	addNode(pNew,12,LEFT);
	addNode(pNew,16,RIGHT);
	return rootNode;
}
void preorderTraversal(binaryTreeNode *rootNode){
	if (rootNode==nullptr){
		return;
	}
	printf("%d ",rootNode->value);
	preorderTraversal(rootNode->pLeft);
	preorderTraversal(rootNode->pRight);
} 
void inorderTraversal(binaryTreeNode *rootNode){
	if (rootNode==nullptr){
		return;
	}
	inorderTraversal(rootNode->pLeft);
	printf("%d ",rootNode->value);
	inorderTraversal(rootNode->pRight);
} 
void postorderTraversal(binaryTreeNode *rootNode){
	if (rootNode==nullptr){
		return;
	}
	postorderTraversal(rootNode->pLeft);
	postorderTraversal(rootNode->pRight);
	printf("%d ",rootNode->value);
} 
int main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	
	return 0;
}

