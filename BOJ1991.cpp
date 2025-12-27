#include <iostream>
#include <map>
using namespace std;

typedef class node *nptr;
class node {
public:
char key;
nptr lchild, rchild;

node(char k){
    key =k;
    lchild = rchild = nullptr;
}
};

void inorder(nptr bt){
if(bt ==nullptr) return;
inorder(bt->lchild);
cout << bt->key << "";
inorder(bt->rchild);

}

void preorder(nptr bt){
if(bt ==nullptr) return;
cout << bt->key << "";
preorder(bt->lchild);
preorder(bt->rchild);

}

void postorder(nptr bt){
if(bt ==nullptr) return;
postorder(bt->lchild);
postorder(bt->rchild);
cout << bt->key << "";

}

map<char,nptr> tree;

int main (){
char a,b,c;
int d;
cin >> d;
for(int i=0; i<d; i++){
cin >> a >> b >> c;

if(tree[a] == nullptr){
    tree[a]= new node(a);
}
if(b != '.'){
    tree[b]= new node(b);
    tree[a] -> lchild = tree[b];
}
if(c != '.'){
    tree[c]= new node(c);
    tree[a]->rchild = tree[c];
}
}

nptr root = tree['A'];

preorder(root); cout<<'\n';

inorder(root); cout<<'\n';

postorder(root); cout<<'\n';



}