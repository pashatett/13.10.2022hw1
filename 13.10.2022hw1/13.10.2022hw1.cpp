#include <iostream>
using namespace std;

void f1(int arr[3][3], int s1, int s2, int* string, int index) { 
    int** Newarr = new int* [s1 + 1];
    for (int i = 0, j = 0; i < s1 + 1; i++) {
        if (i == index)
            Newarr[i] = string;
        else {
            Newarr[i] = arr[j];
            j++;
        }
    }
    for (int i = 0; i < s1 + 1; i++) {
        for (int j = 0; j < s2; j++)
            cout << Newarr[i][j] << " ";
        cout << endl;
    }
}

void f2(int arr[3][3], int s1, int s2, int indexDel) {
    int** newArr = new int* [s1 - 1];
    for (int i = 0, j = 0; i < s1; i++) {
        if (indexDel == i)
            continue;
        else {
            newArr[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < s1 - 1; i++) {
        for (int j = 0; j < s2; j++)
            cout << newArr[i][j] << " ";
        cout << endl;
    }
}

int main() {
    //1
    int arr1[3][3] = {
        {1,2,3},
        {7,8,9},
        {10,11,12}
    };
    int str[3] = { 4,5,6 };
    f1(arr1, 3, 3, str, 1);

    //2
    int arr2[3][3] = {
        {1,2,3},
        {7,8,9},
        {10,11,12}
    };
    f2(arr2, 3, 3, 1);
}