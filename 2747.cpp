// 피보나치 수
// https://www.acmicpc.net/problem/2747
// 재귀

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
		return fibo(n-1)+fibo(n-2);
	}
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int n;
	cin >> n;

	int result = fibo(n);

	cout << result;
	
}