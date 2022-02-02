#include<bits/stdc++.h>
#include "file.h"

using namespace std;

int k, counter, lenArray, findMax = 0;
const int after = 1, before = 0;
const int N = 20;
int app_input;
int a[107];

int main() {
    srand(time(NULL));
    lenArray = N;
    cout << "підказка про подальші дії: "
            "1– заповнити масив псевдовипадковими числами, "
            "2– ввести числа за допомогою клавіатури, "
            "9– закінчити роботу" << endl;
    cin >> app_input;
    switch (app_input) {
        case 1:
            lenArray = generateArray(N, a);
            antiDuplication(lenArray, a);
            break;
        case 2:
            lenArray = N;
            int temp;
            initArray(counter, lenArray, a);
            zsuvVlivoArray(lenArray, a, 2);
            zsuvVpravoArray(lenArray, a, 2);
            swapPorcion(lenArray, a);
            cout << "Введіть додаткове значення: ";
            cin >> temp;
            findMax = FIND_MAX_VALUE_OF_ARRAY(lenArray, a);
            addNewNum(temp, findMax, lenArray, a, before);
            addNewNum(temp, findMax, lenArray, a, after);
            printArray(lenArray, a);
            break;
        case 9:
            break;
        default:
            break;
    }
}
//4, 5 , 7 , 10 11