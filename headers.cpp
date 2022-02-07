//
// Created by Саша Корнієнко on 07.02.2022.
//
#include <bits/stdc++.h>
void generateArray(int (&a)[107],int lenOfArray) {
    for (int i = 1; i <= lenOfArray; i++) a[i] = rand() % 100;
}

void printArray(int *a,int size) {
    for (int i = 1; i <= size; i++) {
        if (i % 5 == 0) cout << a[i] << endl;
        else {
            cout << a[i];
            if (a[i] > 9 && a[i] < 100) cout << "  ";
            else cout << "   ";
        }
    }
}

int initArray(int (&a)[107], int N) {
    int k,counter=0;
    while (counter++ < N) {
        cout << "Введіть елемент з індексом " << counter << ": ";
        cin >> k;
        a[counter] = k;
    }
    counter--;
    return counter;
}
int FIND_MAX_VALUE_OF_ARRAY(int *a, int size) {
    int x = 0;
    for (int i = 1; i <= size; i++) x = max(x, a[i]);
    return x;
}
void addNewNum(int value, int maxF, int &size, int (&a)[107], int flag) {
    int breakPoint = -1;
    bool toogle = false;
    for (int i = 1; i <= size; i++) {
        if (a[i] == maxF) {
            breakPoint = i;
            break;
        }
    }
    for (int i = size; i >= breakPoint; i--) {
        swap(a[i], a[i + 1]);
        toogle = true;
    }
    a[breakPoint] = value;
    if (flag) swap(a[breakPoint], a[breakPoint + 1]);
    size++;
}