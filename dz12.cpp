#include <iostream>
#include "Header.h"
#include "Student.h"
using namespace std;

int main()
{
    setlocale(0, "");
    //task 1
    /*int rows, cols;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;
    int** matrix = new int* [rows + 2];
    for (int i = 0; i < rows + 2; i++) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = 0;
        }
    }
    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Введите элемент [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    int s1, s2;
    cout << "Введите номер строки s1: ";
    cin >> s1;
    cout << "Введите номер строки s2: ";
    cin >> s2;
    insertRows(matrix, rows, cols, s1, s2);
    cout << "Измененный массив:" << endl;
    for (int i = 0; i < rows + 2; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows + 2; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;*/

    //task2
    /*int rows, cols;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;
    int** matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            cout << "Введите элемент [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    rearrangeRows(matrix, rows, cols);
    cout << "Измененный массив:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    deleteMatrix(matrix, rows);*/

    //task3
    /*int N = 0;
    cout << "Enter n: ";
    cin >> N;
    char symbol = '*';
    PrintTriangle(N, symbol);*/

    //task 4
    /*const int numStudents = 30;
    Student students[numStudents];
    for (int i = 0; i < numStudents; i++) {
        cout << "Введите фамилию ученика " << i + 1 << ": ";
        cin.getline(students[i].lastName, 50);
        cout << "Введите класс ученика " << i + 1 << ": ";
        cin >> students[i].grade;
        cout << "Введите оценку по информатике для ученика " << i + 1 << ": ";
        cin >> students[i].informaticsGrade;
        cin.ignore();
    }
    cout << "Ученики 9-х классов с оценкой '5':" << endl;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].grade == 9 && students[i].informaticsGrade == 5) {
            cout << students[i].lastName << endl;
        }
    }*/
    return 0;
}


