// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(0, "");
	

	const int   row = 3 , col =  5 ; 
	
	double numbers[row][col];
	for (int i = 0; i < row; i++)
	{
		for (int l = 0; l < col; l++)
		{
			cin >> numbers[i][l];
			
		}
	}
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		for (int l = 0; l < col; l++)
		{
			cout << numbers[i][l] << "\t";
			
			
		}
		cout << std::endl;
		
	}
	for (int i = 0; i < row; ++i)
	{

		double sum = 0; 
		for (int l = 0 ; l < col; ++l) 
			sum += numbers[i][l]; 
			sum /= 5; 
		cout << sum << "\t"; 
		
	}
	
	return 0; 
}