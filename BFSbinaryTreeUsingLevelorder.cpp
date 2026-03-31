#include<iostream>
#include<queue>
using namespace std;
                            //         1
                           //        /  \
                           //       2    3
                           //           / \
                          //           4   5

class Node{
	public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
}; 

static int index = -1;
Node* CreateTree(int preorder[])
{
	index++;
	if(preorder[index] == -1){
        return NULL;
    }

    Node* root = new Node(preorder[index]);

    root->left = CreateTree(preorder);
    root->right = CreateTree(preorder);

    return root;
	
}

void LevelOrder(Node* root) 
{
    
    if(root==NULL){
    	return ;
	}
	queue<Node*>q;
	q.push(root);
	
       while(!q.empty()){
        Node* curr = q.front();
        q.pop();

        cout << curr->data << " ";
        if(curr->left != NULL){
            q.push(curr->left);
        }

        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}

        


int main()
{
	int preorder[] = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
	Node *root = CreateTree(preorder);
	LevelOrder(root);
	return 0;
}