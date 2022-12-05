
#include <iostream>
using namespace std;

void Merge(int* A, int first, int last)
{
	int middle, start, final, j;
	int* mas = new int[100];
	middle = (first + last) / 2; //вычисление среднего элемента
	start = first; //начало левой части
	final = middle + 1; //начало правой части
	for (j = first; j <= last; j++) //выполнять от начала до конца
		if ((start <= middle) && ((final > last) || (A[start] < A[final])))
		{
			mas[j] = A[start];
			start++;
		}
		else
		{
			mas[j] = A[final];
			final++;
		}
	//возвращение результата в список
	for (j = first; j <= last; j++) A[j] = mas[j];
	delete[]mas;
};
//рекурсивная процедура сортировки
void MergeSort(int* A, int first, int last)
{
	{
		if (first < last)
		{
			MergeSort(A, first, (first + last) / 2); //сортировка левой части
			MergeSort(A, (first + last) / 2 + 1, last); //сортировка правой части
			Merge(A, first, last); //слияние двух частей
		}
	}
};

int main()
{
	int i, n;
	int* A = new int[100];
	cout << "Please, enter a size of the array: "; cin >> n;
	for (i = 1; i <= n; i++)
	{
		cout << i << " Enter element: "; cin >> A[i];
	}
	MergeSort(A, 1, n); 
	cout << "Sorted array: "; 
	for (i = 1; i <= n; i++) cout << A[i] << " ";
	delete[]A;
	system("pause>>void");
}
