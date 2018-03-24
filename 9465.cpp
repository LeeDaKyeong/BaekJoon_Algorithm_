// 스티커
// https://www.acmicpc.net/problem/9465

#include <vector>
#include <iostream> 
using namespace std;

int max(int x,int y)
{
	int max = x;
	if(y>max)
		max = y;
	return max;
}

int sticker(vector<vector<int> > arr)
{
	int n = arr[0].size();
	vector<vector<int> > d(2, vector<int>(n+1));
	d[0][1] = arr[0][0];
	d[1][1] = arr[1][0];

	for(int i=2;i<=n;i++)
	{
		d[0][i] = max(d[1][i-2]+arr[0][i-1], d[1][i-1]+arr[0][i-1]);
		d[1][i] = max(d[0][i-2]+arr[1][i-1], d[0][i-1]+arr[1][i-1]);
	}

	return max(d[0][n],d[1][n]);
}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;
	cin >> n;

	for(int i=0;i<n;i++)
	{
		int col;
		cin >> col;
		vector<vector<int> > arr(2, vector<int>(col));

		for(int x=0;x<2;x++)
			for(int y=0;y<col;y++)
				cin >> arr[x][y];

		cout << sticker(arr) << "\n";

	}


}