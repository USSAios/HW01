// HW01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int sum(int arr[])
{
	int temp = 0;

	for (int i = 0; i < 5; i++)
	{
		temp += arr[i];
	}

	return temp;
}

int avg(int arr[])
{
	int temp = 0;

	for (int i = 0; i < 5; i++)
	{
		temp += arr[i];
	}

	temp /= 5;

	return temp;
}

int main()
{
	int arr[5];

    for (int i = 0; i < 5; i++)
    {
	    std::cout << "Enter number " << (i + 1) << ": ";

	    std::cin >> arr[i];
    }

    std::cout << "Sum of the numbers is: " << sum(arr) << std::endl;

    std::cout << "Average of the numbers is: " << avg(arr) << std::endl;

}

