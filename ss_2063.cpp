// 2063. 중간값 찾기
// https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QPsXKA2UDFAUq&categoryId=AV5QPsXKA2UDFAUq&categoryType=CODE

#include <iostream> 
#include <list>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	list<int> v;

	int length;
	cin >> length;

	int input;
	for(int i=0;i<length;i++)
	{
		cin >> input;
		v.push_back(input);
	}

	v.sort();

	// for(vector<int>::iterator z = v.begin(); z!=v.end();z++)
	// {
	// 	cout << *z << " ";
	// }

	int middle_index = length/2;
	
	list<int>::iterator iter = v.begin();
	std::advance(iter, middle_index);
 
	cout<< *iter <<endl;

}