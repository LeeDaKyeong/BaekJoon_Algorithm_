// 2068. 최대수 구하기
// https://www.swexpertacademy.com/main/solvingProblem/solvingProblem.do

#include <iostream> 
#include <list>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);


	int x;
	cin >>	x;
	
	int num;

	for(int i = 0;i<x;i++)
	{
		list<int> list1;

		for(int j = 0; j< 10; j++)
		{
			cin >> num;
			list1.push_front(num);
		}

		int max = list1.front();
		
		for(list<int>::iterator z=list1.begin(); z!=list1.end(); z++)
		{
			if(*z > max)
			{
				max = *z;
			}
		}
		cout <<"#" << i+1 << " " << max << "\n";
	}
	
}