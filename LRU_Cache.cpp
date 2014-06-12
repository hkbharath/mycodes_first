#include<iostream>
#include<map>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
struct node {
    int a;
    struct node *left,*right;
    node(int x) {
        a=x;
        left=NULL;
        right=NULL;
    }
};
class LRU {
    node *f,*r;
    int sz,n;
    map<int,node *> m;
public:
    LRU(int sizeit) {
        f=r=NULL;
        sz=sizeit;
        n=0;
    }
    void push(int x) {
        if(n==sz) {
            if(m.find(x)!=m.end()) {
                node *ptr=m[x];
                if(ptr->right==NULL) return ;
                if(f==ptr) {
                    f=f->right;
                    f->left=NULL;
                    r->right=ptr;
                    ptr->right=NULL;
                    ptr->left=r;
                    r=r->right;
                } else {
                    ptr->left->right=ptr->right;
                    ptr->right->left=ptr->left;
                    r->right=ptr;
                    ptr->right=NULL;
                    ptr->left=r;
                    r=r->right;
                }
            } else {
                node *ptr;
                if(f==r) {
                    m.erase(f->a);
                    node *nd=new node(x);
                    m[x]=nd;
                    f=r=nd;
                    return;
                }
                ptr=f;
                f=f->right;
                f->left=NULL;
                ptr->right=NULL;
                m.erase(ptr->a);
                r->right=new node(x);
                ptr=r;
                r=r->right;
                r->left=ptr;
                m[x]=r;
            }
        } else {
            if(m.find(x)!=m.end()) {
                node *ptr=m[x];
                if(ptr->right==NULL) return ;
                if(f==ptr) {
                    f=f->right;
                    f->left=NULL;
                    r->right=ptr;
                    ptr->right=NULL;
                    ptr->left=r;
                    r=r->right;
                } else {
                    ptr->left->right=ptr->right;
                    ptr->right->left=ptr->left;
                    r->right=ptr;
                    ptr->right=NULL;
                    ptr->left=r;
                    r=r->right;
                }
            } else {
                node *nd=new node(x);
                m[x]=nd;
                if(f==NULL) {
                    f=r=nd;
                } else{
                    r->right=nd;
                    nd->left=r;
                    r=r->right;
                }
                n++;
            }
        }
    }
    void print() {
        node *ptr=f;
        vector<int> v;
        while(ptr!=NULL) {
            v.push_back(ptr->a);
            ptr=ptr->right;
        }
        std::sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    bool in(int x) {
        return m.find(x)!=m.end();
    }
};
int main() {
    int t,n,q,a,b;
    scanf("%d",&t);
    while(t--) {
        scanf("%d%d",&n,&q);
        LRU l(n);
        while(q--) {
            scanf("%d%d",&a,&b);
            if(a==1) {
                l.push(b);
            } else {
                if(l.in(b)) {
                    cout<<"SOLVED\n";
                    l.push(b);
                } else {
                    cout<<"SORRY\n";
                }
            }
        }
    }
    return 0;
}
