#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> ascending(vector<int> arr)
{
	int temp;

	for (int i = 0 ; i < arr.size(); i++)
	{
		for (int j = i + 1; j < arr.size(); j++)
		{
			if (arr[i] > arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	}

	return arr;
}

vector<int> descending(vector<int>& arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = i + 1; j < arr.size(); j++)
		{
			if (arr[i] < arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	}
	return arr;
}

int main()
{
	vector<int> arr;
	char a;
	int i = 0;
	int value;
	
	while (true)
	{
		cout << "0을 입력해 배열 입력 종료" << endl;

		cin >> value;

		if (value == 0)
		{
			break;
		}


		arr.push_back(value);
		
		for (int i = 0; i < arr.size(); i++)
		{
			cout << arr[i] << " ";
		}

		cout << endl;
	}

	while (true)
	{
		cout << "1 : 오름차정렬, 2 : 내림차정렬" << endl;

		cin >> a;

		if (a == '1') {

			for (int i = 0; i < arr.size(); i++)
			{
				cout << endl << ascending(arr)[i] << endl;
			}

			break;
		}
		else if (a == '2') {

			for (int i = 0; i < arr.size(); i++)
			{
				cout << endl << descending(arr)[i] << endl;
			}

			break;
		}
		else {
			cout << "잘못된 입력입니다." << endl;
			continue;
		}

	}

}