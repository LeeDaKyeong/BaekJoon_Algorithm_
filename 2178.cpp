// 미로 탐색
// https://www.acmicpc.net/problem/2178

// 2차원 배열

#include <vector>
#include <iostream> 
using namespace std;

vector<vector<int> > arr;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int row,col;
	int temp;
	cin >>	row >> col;

	for(int j=0;j<row;j++)
	{
		vector<int> arr_;
		for(int i=0;i<col;i++)
		{
			cin >> temp;
			arr_.push_back(temp);
		}

		arr.push_back(arr_);
	}


    for(int i=0;i<row;i++)
    {
    	for(int j=0;j<col;j++)
    	{
    		cout << arr[i][j] << " ";
    	}
    	cout << "\n";
    }

    int cnt = 0;
    

    
}