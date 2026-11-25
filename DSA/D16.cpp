#include <iostream>
using namespace std;

// Display array
void display(float arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

// Selection Sort
void selectionSort(float arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }

        float temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Bubble Sort
void bubbleSort(float arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        if(!swapped)
            break;
    }
}

// Display top five scores
void topFive(float arr[], int n)
{
    cout << "Top five scores: ";

    int limit = (n < 5) ? n : 5;

    for(int i = n - 1; i >= n - limit; i--)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int n;
    float arr[100], copy[100];

    cout << "Enter number of students: ";

    if(!(cin >> n) || n < 1 || n > 100)
    {
        cout << "Invalid number of students!";
        return 0;
    }

    cout << "Enter first year percentages:\n";

    for(int i = 0; i < n; i++)
    {
        if(!(cin >> arr[i]) ||
           arr[i] < 0 || arr[i] > 100)
        {
            cout << "Invalid percentage!";
            return 0;
        }

        copy[i] = arr[i];
    }

    selectionSort(arr, n);

    cout << "\nSelection Sort (Ascending): ";
    display(arr, n);
    topFive(arr, n);

    bubbleSort(copy, n);

    cout << "\nBubble Sort (Ascending): ";
    display(copy, n);
    topFive(copy, n);

    return 0;
}
