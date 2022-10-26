#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
		string x;
		cin>>x;
		
		int size = x.size();
		int front = x[0] - '0';
		
		// cout<<front<<endl;
		int ans = (front-1) * 10;
		// cout<<ans<<endl;
		// cout<<size<<endl;
		ans += (size*(size+1))/2;
		cout<<ans<<endl;
	}

	return 0;
}