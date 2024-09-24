// m9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int numAccounts = 18;

void sortArray(int[], int);

int main()
{
    // initialize array with account numbers 
    int accountNumbers[] = { 8149420, 5333174, 3080098, 6755963, 9526981, 4449539, 9387197, 5104726, 2931356, 4282637, 1750219, 6086650, 3164838, 2419590, 4578589, 9718904, 6749941, 2545408 };

    sortArray(accountNumbers, numAccounts);

    //ask user for input
    cout << "Enter an account number: ";
    int userNumber;
    cin >> userNumber;

    //linear search
    bool found = false;
    for (int i = 0; i < numAccounts; ++i) {
        if (accountNumbers[i] == userNumber) {
            found = true;
            break;
        }
    }

    if (found) {    //(found = true, is a valid account number)
        cout << "This account number is valid";
    }
    else {
        cout << "This account number is not valid";
    }
    
    return 0;
}
    //sort array. Bubble 
        void sortArray(int array[], int size)
        {
            int temp;
            bool swapped;

            do
            {
                swapped = false;
                for (int count = 0; count < (size - 1); count++)
                {
                    if (array[count] > array[count + 1])
                    {
                        temp = array[count];
                        array[count] = array[count + 1];
                        array[count + 1] = temp;
                        swapped = true;
                    }
                }
            } while (swapped);
        }

        void showArray(const int array[], int size)
        {
            for (int count = 0; count < size; count++)
                cout << array[count] << "";
          
}


