#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
    //constructor
    node (int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

struct node *buildTree(node *root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root=new struct node(data);

    if(data==-1)
        return NULL;
    
    cout<<"Enter the data to be inserted on left of "<<data<<": "<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data to be inserted on right of "<<data<<": "<<endl;
    root->right=buildTree(root->right);
    return root;
};

void levelOrder(node *root){
    queue<node *>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node *temp=q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    struct node *root=NULL;
    buildTree(root);
    levelOrder(root);
    return 0;
}
