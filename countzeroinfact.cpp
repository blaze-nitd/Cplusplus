#include<bits/stdc++.h>
using namespace std;

#define int long long int

main()
{
	int x;
	cin>>x;

	int ans=0;
	int i=1;
	while(1)
	{
		int p=x/(pow(5,i));
		if(p==0)
			break;
		ans+=p;
		i++;
	}
	cout<<ans<<"\n";
}