#include <bits/stdc++.h>
using namespace std;
template <typename T>

class Node  {
    
    public:
    
    T data;
    Node *left;
    Node *right;
    
    Node (T data) {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

// PRINT FUNCTION()

void print(Node<int> *root) {
    if(root==NULL) {
        return;
    }
    
    cout<<root->data<<" ";
    
    if(root->left!=NULL) {
        cout<<"L"<<root->left->data;
    }
    
    if(root->right!=NULL) {
        cout<<"R"<<root->right->data;
    }
    
    cout<<endl;
    print(root->left);
    print(root->right);
}

// TAKEINPUTLEVELWISE()

Node<int> *takeInputLevelwise () {
    
    int rootdata;
    
    cout<<"Enter Data"<<endl;
    cin>>rootdata;
    
    if(rootdata==-1) {
        return NULL;
    }
    
    Node<int> *root = new Node<int>(rootdata);
      
    queue<Node<int>*> pendingNodes;
    pendingNodes.push(root);
    
    while(pendingNodes.size()!=0) {
        Node <int>*front = pendingNodes.front();
        pendingNodes.pop();
        
        cout<<"Enter left child of" <<" "<<front->data<<endl;
        
        int leftchilddata;
        cin>>leftchilddata;
        
        if(leftchilddata!=-1) {
            Node <int>* child = new Node<int>(leftchilddata);
            front->left = child;
            pendingNodes.push(child);
        }
        
        cout<<"Enter right child of" <<" "<<front->data<<endl;
        
        int rightchilddata;
        cin>>rightchilddata;
        
        if(rightchilddata!=-1) {
            Node <int>* child = new Node<int>  (rightchilddata);
            front->right = child;
            pendingNodes.push(child);
        }
    }
    
    return root;
}

// COUNT NODES

int countNode (Node<int> *root) {
    if(root==NULL) {
        return 0;;
    } 
    
    return 1+countNode(root->left) + countNode(root->right);
}

// DIAMETER

int diameter(Node <int>*root) {
    if(root==NULL) {
        return 0;
    }
    
    int opt1 = countNode(root->left) + countNode(root->right);
    int opt2 = diameter(root->left);
    int opt3 = diameter(root->right);
    
    return max(opt1 , max(opt2,opt3));
}


// MAIN FUNCTION 

int main() {
    
    Node<int>  *root = takeInputLevelwise();
  
    
    cout<<endl<<"Tree:";
    print(root);
    
   
    cout<<"Diameter of tree" <<" "<<diameter(root);
}