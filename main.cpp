#include <bits/stdc++.h>
#include "headers.h"
using namespace std;

const int N=13;

void showCreator(){
    cout<<"назва роботи: Лаба 1,\nгрупа: К-15,\nПІБ: Корнієнко Олександр Віталійович,"<<endl;
}
int showProccessing(){
    int num;
    cout<<"1– заповнити масив псевдовипадковими числами, 2– ввести числа за допомогою клавіатури, інше число– закінчити роботу"<<endl;
    cin>>num;
    return num;
}

int main() {
    srand(time(NULL));
    showCreator();
    int lenOfArray;
    int b[107];
    int maxValue,NewValue;
    switch (showProccessing()) {
        case 1:
            lenOfArray = rand() % N + 1;//aray size
            generateArray(b,lenOfArray);//generate array
            maxValue=FIND_MAX_VALUE_OF_ARRAY(b,lenOfArray);// find max falue
            cout << "Введіть додаткове значення: ";
            cin>>NewValue;
            addNewNum(NewValue,maxValue,lenOfArray,b,0);//add before max
            addNewNum(NewValue,maxValue,lenOfArray,b,1);//add after max
            printArray(b,lenOfArray);// print array b
            break;
        case 2:
            lenOfArray = initArray(b,N);//array size
            maxValue=FIND_MAX_VALUE_OF_ARRAY(b,lenOfArray);// find max falue
            cout << "Введіть додаткове значення: ";
            cin>>NewValue;
            addNewNum(NewValue,maxValue,lenOfArray,b,0);//add before max
            addNewNum(NewValue,maxValue,lenOfArray,b,1);//add after max
            printArray(b,lenOfArray);
            break;
        default:
            break;
    }
    return 0;
}
