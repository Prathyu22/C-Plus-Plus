//https://www.hackerearth.com/challenges/competitive/mock-online-coding-assessments-c-easy/algorithm/caesars-cipher-2-b434de35/

#include <bits/stdc++.h>
using namespace std;
int main() {
	int q;
	cin >> q; //Reading no. of queries.
	while(q-- >0)
	{
		int ans = -1;
		bool flag = false;
		string s,t;
		cin>>s>>t;

		for(int i=0; i<int(s.size()); i++)
		{
			int diff = (t[i] - s[i] + 26) % 26;
			if(ans == -1)  ans = diff;
			if(diff == ans)  continue;
			else
			{
				flag = true;
				break;
			}
		}
		if(flag) cout<<"-1"<<endl;
		else cout<<ans<<endl;
	}
	return 0;
}