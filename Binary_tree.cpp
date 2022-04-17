//Bismillah Hir Rehmanir Rahim
//Allah knows best
#pragma GCC optimize("Ofast")
#pragma  GCC optimize ("O3")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

#define   ll        long long
#define   lli       long long int
#define   ld        long double
#define   PI        2*acos(0.0)
#define   pb        push_back
#define   ppb       pop_back
#define   pf        push_front
#define   ppf       pop_front
#define   inf       1e18
#define   ff        first
#define   ss        second
#define   mp        make_pair
#define   vi        vector<int>
#define   si        set<int>
#define   ii        pair<int,int>
#define   all(v)    (v).begin(),(v).end()
#define   rall(v)   (v).begin(),(v).end(),greater<ll>()
#define   rall1(v)  (v).rbegin(),(v).rend()
#define   uniq(v)   (v).erase(unique(all(v)),(v).end())
#define   read(v)   for(auto &it:v) cin>>it
#define   write(v)  for(auto &it:v) cout<<it<<" "
#define   GCD(a,b)   __gcd(a,b)
#define   nl         "\n"
#define   lb         lower_bound
#define   up         upper_bound
#define   ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>

using namespace __gnu_pbds;
using namespace std;

struct node{
    struct node *left;
    int data;
    struct node *right;
};

struct node *create_node(int data){
    struct node *new_node=(struct node *)malloc(sizeof(struct node));
    new_node->left=NULL;
    new_node->data=data;
    new_node->right=NULL;

    return new_node;
}

void add_left_child(struct node* node,struct node* child){
    node->left=child;
}

void add_right_child(struct node *node,struct node *child){
    node->right=child;
}

struct node *create_tree(){
    struct node*two=create_node(2);
    struct node*seven= create_node(7);
    struct node *nine= create_node(9);
    add_left_child(two,seven);
    add_right_child(two,nine);


    struct node* one= create_node(1);
    struct node* six= create_node(6);
    add_left_child(seven,one);
    add_right_child(seven,six);

    struct node* five= create_node(5);
    struct node *ten= create_node(10);
    add_left_child(six,five);
    add_right_child(six,ten);

    struct node* eight= create_node(8);
    add_right_child(nine,eight);

    struct node*three= create_node(3);
    struct node *four= create_node(4);
    add_left_child(eight,three);
    add_right_child(eight,four);

    return two;


}


int main()
{

    struct node *root=create_tree();
    printf("%d \n",root->data);


    return 0;
}
