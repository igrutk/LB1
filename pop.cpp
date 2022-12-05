# include <iostream>
# include <cmath>
using namespace std;

void swap(double& a, double& b) //функция, которая меняет местами переменные
{
	double temp = a;//осуществлено через дополнительную переменную, но можно обойтись и без неё: a = a+b; b = a-b; a = a-b
	a = b;
	b = temp;
}

void bubble_sort(double*arr, size_t size)//сортировка пузырком
{
	for (size_t i = 0; i < size - 1; ++i)
	{
		for (size_t j = 0; j < size - i - 1; ++j)
		{
			if (arr[j] < arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}

		}

	}

}

int main(void)
{
	size_t size;
	cout << "Please, enter a size of the array: ";//ввод размера массива с клавиатуры
	cin>> size;
	double* arr = new double[size];
	cout<< "Please, enter "<< size<< " values: ";//ввод самого массива с клавиатуры

	for (size_t i = 0; i < size; i++) 
	{
		cin>> arr[i];
	}
	bubble_sort(arr, size);//ф-я сортировки
	for (size_t i = 0; i < size; ++i) cout << arr[i] << " ";// вывод
	cout << endl;

	delete[] arr;
	arr = nullptr;//очищение памяти

	return EXIT_SUCCESS;//успешный выход из программы

}
