//
// Created by Саша Корнієнко on 02.02.2022.
//
#include<bits/stdc++.h>

int generateArray(int N, int a[107]) {
    int lenOfArray = rand() % N + 1;
    for (int i = 1; i <= lenOfArray; i++) a[i] = rand() % 100;
    return lenOfArray;
}

void printArray(int size, int a[107]) {
    for (int i = 1; i <= size; i++) {
        if (i % 5 == 0) cout << a[i] << endl;
        else {
            cout << a[i];
            if (a[i] > 9 && a[i] < 100) cout << "  ";
            else cout << "   ";
        }
    }
}

void initArray(int &counter, int N, int a[107]) {
    int k;
    while (counter++ < N) {
        cout << "Введіть елемент з індексом " << counter << ": ";
        cin >> k;
        a[counter] = k;
    }
    counter--;
}

void zsuvVlivoArray(int size, int a[107], int k) {
    for (int i = 1; i <= k; i++) a[size + i] = a[i];
    for (int i = 1; i <= size - k; i++) swap(a[i], a[i + k]);
}

void zsuvVpravoArray(int size, int a[107], int k) {
    while (k--)
        for (int i = 1; i < size; i++) swap(a[1], a[i + 1]);
}

void swapPorcion(int size, int a[107]) {
    int porcion = size / 2;

    for (int i = 1; i <= porcion; i++) {
        swap(a[i], a[i + porcion]);
    }
    if (size % 2 != 0) {
        swap(a[porcion + 1], a[size]);
        swap(a[size], a[size - porcion + 1]);
        int q = 1;
        while (1) {
            if (porcion > 2) {
                swap(a[size - q + 1], a[size - q]);
                q++;
                porcion--;
            } else break;
        }
    }
}

int FIND_MAX_VALUE_OF_ARRAY(int size, int a[107]) {
    int x = 0;
    for (int i = 1; i <= size; i++) x = max(x, a[i]);
    return x;
}

void addNewNum(int value, int maxF, int &size, int a[107], int flag) {
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

void antiDuplication(int &size, int a[107]) {
    int temp, findMax;
    const int after = 1, before = 0;
    zsuvVlivoArray(size, a, 2);
    zsuvVpravoArray(size, a, 2);
    swapPorcion(size, a);
    cout << "Введіть додаткове значення: ";
    cin >> temp;
    findMax = FIND_MAX_VALUE_OF_ARRAY(size, a);
    addNewNum(temp, findMax, size, a, before);
    addNewNum(temp, findMax, size, a, after);
    printArray(size, a);
}
/*
len 5
 1 2 5 3 4
 */
