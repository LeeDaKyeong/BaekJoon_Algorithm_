// 쉬운 계단 수
// https://www.acmicpc.net/problem/10844

#include <vector>
#include <iostream> 
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;
	cin >> n;

	vector<vector<long> > arr(n+1, vector<long>(10, 0));

	for(int i=1;i<=9;i++)
		arr[1][i] = 1;

	for(int i=2;i<=n;i++)
	{
		for(int j=0;j<=9;j++)
		{
			arr[i][j] = 0;
			if(j-1>=0)
				arr[i][j] += arr[i-1][j-1];
			if(j+1<=9)
				arr[i][j] += arr[i-1][j+1];

			arr[i][j] = arr[i][j]%1000000000;
		}
	}



	// for(int i=0;i<=n;i++)
	// {
	// 	for(int j=0;j<=9;j++)
	// 	{
	// 		cout << arr[i][j] << " ";
	// 	}
	// 	cout << "\n";
	// }
	
	long long sum = 0;
	for(int i=0;i<=9;i++)
		sum += arr[n][i];

	cout << sum%1000000000;

}