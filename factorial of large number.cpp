
#include <bits/stdc++.h>
using namespace std;

void fact(int n)
{
    vector<int> ans;
    ans.push_back(1);
    int car=0,prod=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<ans.size();j++)
        {
            prod=(ans[j]*i)+car;
            ans[j]=prod%10;
            car=prod/10;
        }
        while(car!=0)
        {
            ans.push_back(car%10);
            car/=10;
        }
    }
    for(int i=ans.size()-1;i>=0;i--)
        cout << ans[i];
}

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    fact(n);
	    cout << endl;
	}
	return 0;
}
