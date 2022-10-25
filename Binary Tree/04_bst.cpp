// Input from user
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
    //constructor to intake value
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

//function to build tree
struct node *buildtree(node* root){
    cout<<"Enter the data: "<<endl;
    int idata;
    cin>>idata;
    root=new struct node(idata);  //dynamic memory allocation

    if(idata==-1)
        return NULL;

    cout<<"Enter data for inserting in left of "<<idata<<":"<<endl;
    root->left=buildtree(root->left);
    cout<<"Enter data for inserting in right of "<<idata<<":"<<endl;
    root->right=buildtree(root->right);
    return root;
}

int main(){

    struct node *root=NULL;
    root=buildtree(root);
    cout<<root->left->data;
    return 0;
}