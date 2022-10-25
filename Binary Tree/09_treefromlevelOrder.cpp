#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
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

void buildTreeFromLevelOrder(node *&root){
    queue<node*> q;
    cout<<"Enter the root node: "<<endl;
    int data;
    cin>>data;
    root=new struct node(data);
    q.push(root);
    while(!q.empty()){
        node *temp=q.front();
        q.pop();
        cout<<"Enter left node for "<<temp->data<<": "<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left=new struct node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter right node for "<<temp->data<<": "<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right=new struct node(rightData);
            q.push(temp->right);
        }
    }
}

int main(){
    struct node *root=NULL;
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    buildTreeFromLevelOrder(root);
    levelOrder(root);
    return 0;
}