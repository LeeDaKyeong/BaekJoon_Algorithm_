// 피보나치 수
// https://www.acmicpc.net/problem/2747

#include <iostream> 
using namespace std;

int fibo(int n)
{
	if(n == 0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		int sum = 0;
		int first = 0;
		int second = 1;

		for(int i=1;i<n;i++)
		{
			sum = first+second;
			first = second;
			second = sum;

		}
		return sum;
	}
}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;
	cin >> n;

	int result = fibo(n);

	cout << result;
	
}