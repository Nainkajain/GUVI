#include<bits/stdc++.h>
using namespace std;

class SegmentTree{
	int *tree, x;
public:
	SegmentTree(int x=100000){
		tree = new int[2*x];
	}
	void buildTree(vector<int> vec) {
	    this->x = vec.size();
		for (int i=0; i<vec.size(); i++)
			tree[x+i] = vec[i];
		for (int i=x-1; i>0; --i)
			tree[i] = tree[i<<1] + tree[i<<1 | 1];
	}
	void updateTreeNode(int p, int value) {
		tree[p+x] = value;
		p = p+x;
		for (int i=p; i>1; i>>=1)
			tree[i>>1] = tree[i] + tree[i^1];
	}
	int sum(int l, int r){
		int res = 0;
		for(l+=x, r+=x; l<r; l>>=1, r>>=1) {
			if(l&1)
				res += tree[l++];

			if (r&1)
				res += tree[--r];
		}
		return res;
	}
};

int main(){
	int x, queries, l, r;
	cin>>x>>queries;

	vector<int> vec(x);
	for(int i=0; i<x; i++)
		cin>>vec[i];

	SegmentTree tree;
	tree.buildTree(vec);
	for(int i=0; i<queries; i++){
        cin>>l>>r;
        l--;
        cout<<tree.sum(l,r)<<endl;
	}
	return 0;
}
