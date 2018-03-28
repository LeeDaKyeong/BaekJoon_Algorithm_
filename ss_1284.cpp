// 1284. 수도 요금 경쟁
// https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV189xUaI8UCFAZN&categoryId=AV189xUaI8UCFAZN&categoryType=CODE

#include <iostream>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int length;
	cin >> length;

	int P,Q,R,S,W;

	for(int index = 0; index < length; index++)
	{
		cin >> P >> Q >> R >> S >> W;
		
		int A = P*W;
		int B = Q;
		if(W > R)
		{
			B = Q + (W-R)*S;
		}

		int price = min(A,B);
		cout << "#" << index+1 << " " << price << "\n";
	}

}