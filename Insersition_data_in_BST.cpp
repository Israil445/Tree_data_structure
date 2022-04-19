//Bismillah Hir Rehmanir Rahim
//Allah knows best
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *parent;
    struct node *left;
    struct node *right;

};

struct node *create_node(int item){
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=item;
    new_node->left=NULL;
    new_node->right=NULL;
    new_node->parent=NULL;
    return new_node;
}
void add_left_child(struct node *node,struct node *child){
    node->left=child;
    if(child!=NULL){
        child->parent=node;
    }
}

void add_right_child(struct node *node,struct node *child){
    node->right=child;
    if(child!=NULL){
        child->parent=node;
    }
}


struct node *bst_insert(struct node* root,struct node *node){
    if(root==NULL){
        root=node;
        return node;
    }
    struct node *parent_node,*current_node;
    parent_node=NULL;
    current_node=root;
    while(current_node!=NULL){
        parent_node=current_node;
        if((node->data) < (current_node->data)){
            current_node=current_node->left;
        }
        else{
            current_node=current_node->right;
        }
    }

    if(node->data <parent_node->data){
        add_left_child(parent_node,node);
    }
    else{
        add_right_child(parent_node,node);

    }
    return root;
}

struct node* create_bst(){
    struct node *root,*node;
    int arr[]={5,17,3,7,12,19,1,4};
    root=create_node(10);//10 is the bst root;
    for(int i=0;i<8;i++){
        node= create_node(arr[i]);
        root=bst_insert(root,node);
    }
    return root;

}

void in_order(struct node *root){
    if(root==NULL){
        return ;
    }
    in_order(root->left);
    printf("%d ",root->data);
    in_order(root->right);


}




int main()
{
    struct node *root=create_bst();
    printf("%d\n",root->data);
    in_order(root);



    return 0;
}
