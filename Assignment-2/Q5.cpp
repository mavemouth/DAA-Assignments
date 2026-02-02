#include <bits/stdc++.h>
using namespace std;

struct Node {
    char ch;
    int freq;
    Node *left, *right;
};

struct cmp {
    bool operator()(Node* a, Node* b) {
        return a->freq > b->freq;
    }
};

void print(Node* root, string s) {
    if(!root) return;
    if(root->ch != '$')
        cout << root->ch << " : " << s << endl;
    print(root->left, s+"0");
    print(root->right, s+"1");
}

int main() {
    vector<char> ch = {'a','b','c','d','e','f'};
    vector<int> freq = {5,9,12,13,16,45};

    priority_queue<Node*, vector<Node*>, cmp> pq;

    for(int i=0;i<ch.size();i++)
        pq.push(new Node{ch[i],freq[i],NULL,NULL});

    while(pq.size() > 1) {
        Node *l = pq.top(); pq.pop();
        Node *r = pq.top(); pq.pop();
        pq.push(new Node{'$',l->freq+r->freq,l,r});
    }

    print(pq.top(), "");
    return 0;
}
