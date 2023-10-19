 #pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
template <typename T>
void randArray(T arr[], int size, int a = 1, int b = 10) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (b - a + 1) + a;
	}
}
template <typename T>
void printArray(T arr[], const int size, int w_cout = 5) {
	cout << "\t array [" << size << "]\n";
	for (int i = 0; i < size; i++)
	{
		cout.width(w_cout);
		cout << arr[i];
	}
	cout << endl;
}
//Нахождение индекса максимального элемента массива
template <typename T>
int indexMaxElement(T arr[], int size)
{
	T Max = arr[0];
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		if (Max < arr[i]) {
			Max = arr[i];
			index = i;
		}
	}
	return index;
}

//Нахождение индекса минимального элемента массива
template <typename T>
int indexMinElement(T arr[], int size)
{
	T Min = arr[0];
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		if (Min > arr[i]) {
			Min = arr[i];
			index = i;
		}
	}
	return index;
}
template <typename T>
T sumArray(T arr[], int size)
{
	T Sum = 0;
	for (int i = 0; i < size; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}
//Нахождение заданного значения в массиве
template <typename T>
int search(T arr[], const int size, T key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
			return i;
	}
	return -1;
}
template <typename T>
void mySort(T arr[], const int size)
{
	//Тело Шаблонной функции
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				T tp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tp;
			}
		}
	}
}
template <typename T>
double task4_quadrant(T a, T b, T c)
{
	T x1 = 0, x2 = 0, d = 0;
	if (a == 1) {
		while (true) {
			x1 = rand() % 2001 - 1000;
			x2 = rand() % 2001 - 1000;
			while (true) {
				while (x1 == 0) {
					x1 = rand() % 2001 - 1000;
				}
				while (x2 == 0) {
					x2 = rand() % 2001 - 1000;
				}
				if (x1 != 0 && x2 != 0) {
					break;
				}
			}
			if (x1 * x2 == c && x1 + x2 == -b) {

				break;
			}
			else {
				x1 = rand() % 2001 - 1000;
				x2 = rand() % 2001 - 1000;
			}
		}
		cout << "x1: " << x1 << " x2: " << x2 << endl;
	}
	else if (a > 1 || a < 0) {
		d = b * b - 4 * a * c;
		cout << "d: " << d << endl;
		if (d > 0) {
			x1 = (-b + sqrt(d)) / 2 * a;
			x2 = (-b - sqrt(d)) / 2 * a;
			cout << "x1: " << x1 << " x2: " << x2 << endl;
		}
		else if (d == 0)
			x1 = -b / 2 * a;
		else
			cout << "Discriminant = 0" << endl;
	}
	else
		cout << "incorrect input!!";
	return 0;
}
template <typename T>
double task4_line(T a, T b)
{
	if (a == 0)
		cout << "Divided by zero!";
	else
		cout << "-b / a: " << -b / a << endl;
	return  0;

}          
template <typename T>
double averageMoreM(T arr[], const int size, T m)
{
	T count = 0;
	T sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (m < arr[i]) {
		sum += arr[i];
		count++;
	}
	}

	double  avg = 0;
	avg = static_cast<double>(sum) / count;
	cout << "Average of numbers < m: " << avg << endl;
	return avg;
}
template <typename T>
void delete_Arr(T arr[], const int size) {
	
	for (int i = 0; i < size - 1; i++)
	{	T k = arr[i];
	arr[i] = arr[i + 1];
	}
	arr[size - 1] = 0;
}
template <typename T>
void smoothArray(T arr[], const int size)
{
	double half_sum = 0;
	for (int i = 0; i < 6; i++)
	{
		half_sum = (arr[0] + arr[1]) / 2;
		T k = arr[i];
		for (int i = 0; i < size - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		
		arr[size - 1] = 0;
		arr[0] = half_sum;
		printArray(arr, size, 3);
	}
}
template <typename T>
void addItemBack(T*& arr, int& size, T value) {
	//1. Создаем временный массив 1-елемент больше
	T* tmp = new T [size + 1];
	//2. Переносим данные из старого массива в новый
	for (int i = 0; i < size; i++)
	{
		tmp[i] = arr[i];
	}
	//3. В конце массива вносив новый элемент value 
	tmp[size] = value;
	//4.очищаем данные старого массива 
	if (arr != nullptr) delete[] arr;
	//5.Привязываем указатель на новую память
	arr = tmp;
	size++;
}
template <typename T>
bool isPos(T x) {
	return x > 0;
}template <typename T>
bool isNeg(T x) {
	return x < 0;}
template <typename T>
bool isEven(T x) {
	return (int)x % 2 == 0;;
}
template <typename T>
bool isOdd(T x) {
	return (int)x % 2 != 0;;
}
template <typename T>
int coutIf(T* arr, int size, bool(*func)(T val)) {
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		if (func(arr[i]) == true)
			counter++;
	}
	return counter;
}
template <typename T>
int sum_if(T* arr, int size, bool (*fP)(T)) {
	T sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (fP(arr[i]))
		{
			sum += arr[i];
		}
	}
	return sum;
}
template <typename T>
int find_if(T* arr, int size, bool (*fP)(T)) {
	for (int i = 0; i < size; i++)
	{
		if (fP(arr[i]) == true) {
			return i;
		}
	}
	return -1;
}
template <typename T>
void remove_if(T* arr, int size, bool (*fP)(T)) {
	int amount = countIf(arr, size, fP);
	T* tmp = new T[size - amount];
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (!fP(arr[i])) tmp[j++] = arr[i];
	}
	if (arr != nullptr) delete[] arr;
	arr = tmp;
	size -= amount;
}
template <typename T>
T find_min_max(T* arr, int size, bool (*fP)(T, T)) {
	T m = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (fP(arr[i], m))
			m = arr[i];
		
	}
	return m;
}
bool isPalindrome(const char* str) {
	int len = strlen(str);
	int start = 0;
	int end = len - 1;
	while (start < end) {
		while (!isalpha(str[start]) && start < end) {
			start++;
		}
		while (!isalpha(str[end]) && start < end) {
			end--;
		}
		char c1 = tolower(str[start]);
		char c2 = tolower(str[end]);
		if (c1 != c2) {
			return false;
		}

		start++;
		end--;
	}

	return true;
}

void decryptCaesarCipher(char* cipherText, int K) {
	char* current = cipherText;

	while (*current != '\0') {
		if (isalpha(*current)) {
			char base = islower(*current) ? 'a' : 'A'; // Определяем базовый регистр (маленькие или большие буквы)
			*current = (((*current - base - K) + 26) % 26) + base; 
		}
		current++;
	}
}
void insertRows(int**& matrix, int& rows, int cols, int s1, int s2) {
	int** newMatrix = new int* [rows + 2];
	for (int i = 0; i < rows + 2; i++) {
		newMatrix[i] = new int[cols];
		for (int j = 0; j < cols; j++) {
			newMatrix[i][j] = 0;
		}
	}
	for (int i = 1; i <= rows; i++) {
		for (int j = 0; j < cols; j++) {
			newMatrix[i][j] = matrix[i][j];
		}
	}
	for (int i = 0; i <= rows; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
	matrix = newMatrix;
	rows += 2;
}
void rearrangeRows(int** matrix, int rows, int cols) {
	int* tempRow = matrix[0];
	for (int i = 0; i < rows - 1; i++) {
		matrix[i] = matrix[i + 1];
	}
	matrix[rows - 1] = tempRow;
}
void deleteMatrix(int** matrix, int rows) {
	for (int i = 0; i < rows; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
}
void PrintTriangle(int N, char symbol) {
	if (N % 2 == 0) {
		cout << "N должно быть нечетным числом." << endl;
		return;
	}
	char** triangle = new char* [N];
	for (int i = 0; i < N; i++) {
		triangle[i] = new char[N];
		for (int j = 0; j < N; j++) {
			if (j >= N / 2 - i && j <= N / 2 + i) {
				triangle[i][j] = symbol;
			}
			else {
				triangle[i][j] = ' ';
			}
			cout << triangle[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < N; i++) {
		delete[] triangle[i];
	}
	delete[] triangle;
}