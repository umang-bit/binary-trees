#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this -> data =d;
        this ->left=NULL;
        this ->right=NULL;
    }
    
};
node* buildtree(node* root){
        cout<<"enter the data and enter -1 in place of null"<<endl;
        int x;
        cin>>x;
        if(x==-1){
            return NULL;
        }
        root=new node(x);
        cout<<"enter the value at the left of "<<root->data<<endl;
        root->left=buildtree(root->left);
        cout<<"enter the value at the right of "<<root->data<<endl;
        root->right=buildtree(root->right);
        return root;
    }
int main(){
    node* root=NULL;
    root=buildtree(root);
    return 0;
}