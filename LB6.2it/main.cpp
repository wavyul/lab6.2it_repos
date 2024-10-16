#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

void create(int* arr, int SIZE, int MIN, int MAX)
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
    }
}

void Print(int* arr, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << setw(4) << arr[i];
    cout << endl;
}

double FindingTheArithmetic(int* arr, int SIZE)
{
    double sum = 0;
    int count = 0;

    for (int i = 0; i < SIZE; i++) {
        if (i % 2 == 0) {
            sum += arr[i];
            count++;
        }
    }

    if (count == 0) {
        return 0;
    }
    else {
        return sum / count;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 10;
    int MIN = -10;
    int MAX = 10;

    int* arr = new int[SIZE];
    create(arr, SIZE, MIN, MAX);


    Print(arr, SIZE);
    cout << "\n\n";
    cout << "Середнє арифметичне елементів з парними індексами: "
        << FindingTheArithmetic(arr, SIZE) << endl;

    delete[] arr;

    return 0;
}
