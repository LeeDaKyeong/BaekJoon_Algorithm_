
#include <iostream> 
using namespace std;

int myPlus(int x, int y)
{
	return x+y;
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int x,y;
	cin >>	x >> y;
	cout << myPlus(x,y);
}