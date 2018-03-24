// A+B - 3
// https://www.acmicpc.net/problem/10950

#include <iostream> 
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int n;
	cin >> n;

	int x,y;
	for(int i = 0;i<n;i++)
	{
		cin >> x >> y;
		cout << x+y << "\n";
	}
}