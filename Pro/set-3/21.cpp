#include<bits/stdc++.h>
using namespace std;

string equalAveragePartition(vector<int> arr){
	int sum = 0;
	int n = arr.size();
	for(int k = 0; k < n; k++)
		sum += arr[k];

	int lsum = 0;
	for(int k = 0; k < n-1; k++){
		lsum += arr[k];
		int rsum = sum - lsum;
     	if (lsum * (n - k - 1) == rsum * (k + 1)) {
			return "yes";
		}
	}
  	return "no";
}

int main() {
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int k=0; k<n; k++){
        cin>>vec[k];
    }
    cout<<equalAveragePartition(vec)<<endl;
	return 0;
}
