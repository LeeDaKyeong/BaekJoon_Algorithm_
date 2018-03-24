#include <iostream> 
using namespace std;

int main()
{
	int row = 3;
	int col = 10;
	char** arr = new char*[row];
	for(int i=0;i<row;i++)
	{
		arr[i] = new char[col];
	}

	arr[0][0] = 'B';
	arr[0][1] = 'a';
	arr[0][2] = 'n';
	arr[0][3] = 'a';
	arr[0][4] = 'n';
	arr[0][5] = 'a';
	//arr[0][6] = '\n';

	arr[1][0] = 'A';
	arr[1][1] = 'a';
	arr[1][2] = 'p';
	arr[1][3] = 'p';
	arr[1][4] = 'l';
	arr[1][5] = 'e';
	//arr[1][6] = '\n';

	arr[2][0] = 'F';
	arr[2][1] = 'o';
	arr[2][2] = 'o';
	arr[2][3] = 'o';
	arr[2][4] = 'd';
	//arr[1][5] = '\n';


	cout << arr << "\n";
	cout << *arr << "\n";
	cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
	cout << *arr[0] << " " << *arr[1] << " " << *arr[2] << "\n";
	cout << **arr << "\n";

	//printf("%f\n",arr);
	//printf("%s\n",arr[0]);

}