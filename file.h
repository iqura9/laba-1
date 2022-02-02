//
// Created by Саша Корнієнко on 01.02.2022.
//

#ifndef XXX2_FILE_H
#define XXX2_FILE_H
int generateArray(int N,int a[107]);//Генерація масиву псевдо випадкових чисел
void printArray(int size,int a[107]);//Вивід масиву на екран
void zsuvVlivoArray(int size,int a[107],int k);//зсвув масиву вліво на k кровів
void zsuvVpravoArray(int size,int a[107],int k);//зсвув масиву вправо на k кровів
void swapPorcion(int size,int a[107]);//поміняти місцями пропорції
void initArray(int &counter, int N, int a[107]);//Створити масив
int FIND_MAX_VALUE_OF_ARRAY(int size, int a[107]);//Знайти максимальне значення в масиві
void addNewNum(int value ,int maxF,int &size, int a[107],int flag);//Добавит новий елемент в масив після або перед максимальним числом
void antiDuplication(int &size, int a[107]);//тут всі функи разом
#endif //XXX2_FILE_H

