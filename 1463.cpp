// 1로 만들기
// https://www.acmicpc.net/problem/1463

#include <vector>
#include <iostream> 
using namespace std;


vector<int> v;


int main()
{

	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int n;
	cin >> n;

	vector<int> v(n+1,0);

	int min;

	for(int i=2;i<=n;i++)
	{
		v[i] = v[i-1]+1;
		if((i%3==0) and (v[i/3]+1<v[i]))
		{
			v[i] = v[i/3]+1;
		}
		else if((i%2==0) and (v[i/2]+1<v[i]))
		{
			v[i] = v[i/2]+1;
		}

	}

	cout << v[n] << "\n";
	
}