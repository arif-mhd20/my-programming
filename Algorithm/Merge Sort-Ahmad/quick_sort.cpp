
#include <iostream>

using namespace std;

void printArray (int *arr, int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void quickSort (int *arr, int startPoint, int endPoint, int arrSize)
{
    int pivot, leftIndex = startPoint, rightIndex = endPoint, temp;
    pivot = (endPoint + startPoint) / 2;
    cout << "startPoint is: " << startPoint << " ### endPoint: " << endPoint <<" ### pivot: " << pivot << endl;

    if ((endPoint - startPoint) <= 1)
    {
        if (arr[startPoint] > arr[endPoint])
        {
            cout << "Array size too small. Checking, swapping and returning" <<endl;
            temp = arr[startPoint];
            arr[startPoint] = arr[endPoint];
            arr[endPoint] = temp;
        }
        printArray (arr, arrSize);
        cout << endl;
        return;
    }
    for (;;)
    {
        while (leftIndex < pivot)
        {
            if (arr[leftIndex] > arr[rightIndex])
            {
                cout <<
                "leftIndex array value less than rightIndex array value, switching with rightIndex array value"
                << endl;
                temp = arr[leftIndex];
                arr[leftIndex] = arr[rightIndex];
                arr[rightIndex] = temp;
                printArray (arr, arrSize);
                continue;
            }
            if (arr[leftIndex] > arr[pivot])
            {
                cout <<"leftIndex array value less than pivot, switching with pivot"<< endl;
                temp = arr[leftIndex];
                arr[leftIndex] = arr[pivot];
                arr[pivot] = temp;
                pivot = leftIndex;
                leftIndex = startPoint;
                rightIndex = endPoint;
                printArray (arr, arrSize);
                continue;
            }
            leftIndex++;
            cout << "leftIndex++ " << endl;
        }

        while (rightIndex > pivot)
        {
            if (arr[rightIndex] < arr[leftIndex])
            {
                cout <<"rightIndex array value less than leftIndex array value, switching with leftIndex array value"<< endl;
                temp = arr[leftIndex];
                arr[leftIndex] = arr[rightIndex];
                arr[rightIndex] = temp;
                printArray (arr, arrSize);
                continue;
            }
            if (arr[rightIndex] < arr[pivot])
            {
                cout << "rightIndex: " << rightIndex << " ### pivot: " << pivot<< endl;
                cout <<"rightIndex array value less than pivot, switching with pivot"<< endl;
                temp = arr[rightIndex];
                arr[rightIndex] = arr[pivot];
                arr[pivot] = temp;
                pivot = rightIndex;
                leftIndex = startPoint;
                rightIndex = endPoint;
                printArray (arr, arrSize);
                continue;
            }
            rightIndex--;
            cout << "rightIndex-- " << endl;
        }

        cout << endl;
        if (leftIndex == pivot && rightIndex == pivot)
        {
            quickSort (arr, startPoint, pivot, arrSize);
            quickSort (arr, pivot + 1, endPoint, arrSize);
        }
        return;

    }
}


int main ()
{
    const int arrSize = 5;
    int *arr = new int[arrSize] { 45,184,24,15,35 };
    printArray (arr, arrSize);
    cout << endl;

    quickSort (arr, 0, arrSize - 1, arrSize);
    printArray (arr, arrSize);

    delete[]arr;

    return 0;
}
