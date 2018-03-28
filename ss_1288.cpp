// 1288. 새로운 불면증 치료법
// https://www.swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV18_yw6I9MCFAZN&categoryId=AV18_yw6I9MCFAZN&categoryType=CODE

#include <iostream>
using namespace std;

int array_sum(int arr[])
{
	int sum = 0;
	for(int i=0;i<10;i++)
	{
		sum += arr[i];
	}
	return sum;
}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int length;
	cin >> length;

	string input;
	int input_;
	for(int i=0;i<length;i++)
	{
		int visited[] = {0,0,0,0,0,0,0,0,0,0};
		cin >> input;
		input_ = atoi(input.c_str());

		int sum = 0;
		int cnt = 0;

		while(1)
		{
			int chr;
			for(int j=0;j<input.size();j++)
			{
				char input_chr = input[j];
				chr = int(input_chr)-48;
				visited[chr] = 1;
			}

			// for(int j=0;j<10;j++)
			// {
			// 	cout << visited[j] << " ";
			// }
			// cout << "\n";

			sum = array_sum(visited);
			if(sum == 10)
			{
				break;
			}
			input = to_string(input_*(cnt+2));
			//cout << "input : " << input << "\n";
			
			cnt += 1;
		}
		cout << "#" << i+1 << " " << input << "\n";	

	}
}