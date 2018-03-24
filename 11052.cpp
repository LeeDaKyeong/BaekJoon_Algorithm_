// 붕어빵 판매하기
// https://www.acmicpc.net/problem/11052

#include <vector>
#include <iostream> 
using namespace std;


int max(int x,int y)
{
	int max = x;
	if(y>max)
	{
		max = y;
	}
	return max;
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int n;
	//int *p = new int[n+1];
	//int *d = new int[n+1];

	cin >> n;
	vector<int> p(n+1,0);
	vector<int> d(n+1,0);

	for(int i=1;i<=n;i++)
	{
		cin >> p[i];
	}	

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			d[i] = max(d[i],p[j]+d[i-j]);
		}
		
	}

	cout << d[n];

	//delete [] p;
	//delete [] d;
}

