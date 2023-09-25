// DinamicArray.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <typeinfo>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
//#include <cstdlib>
#include <ctype.h>

using namespace std;

class Array {
private:
    int index;
    int* _currentArray;
    int size;

public:
    Array(const int& size) {
        this->size = size;
        index = 0;
        _currentArray = new int[size];
        for (int i = 0; i < size; i++)
        {
            _currentArray[i] = {};
        }
    }
    void SetValue(const int& value) {
            _currentArray[index] = value;
            index++;
    }
    void Random() {
        srand(time(NULL));
        for (int i = 0; i < size; i++)
        {
            _currentArray[i] = 1 + rand() % 10;
        }
    }

    void PrintArray() {
        for (int i = 0; i < size; i++)
        {
            cout << _currentArray[i] << endl;
        }
    }

    void Scramble() {
        for (int i = 0; i < size; i++)
        {
            _currentArray[0 + rand() % (sizeof(_currentArray) / 4) - 1] = _currentArray[i];
        }
    }

    int ArraySize() {
        return sizeof(_currentArray) / 4;
    }

    void ClearArrayMemory() {
        delete[] _currentArray;
    }
};
int main()
{
    Array newArray(10);
    newArray.Random();
    newArray.PrintArray();
    newArray.ClearArrayMemory();
    
}