#include <iostream>
using namespace std;

void display(float arr[], int n) {
    for (int i = 0; i < n ; i ++)
    cout << arr[i] << " ";
    cout << endl;

}

//Selection Sort 

void SelectionSort(float arr[], int n) {
    for ( int i = 0; i < n-1; i++) {
        int minindex = i;

        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minindex])
                minindex = j;
        }

        float temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }

}

void BubbleSort (float arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        bool swapped = false;
        for (int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                float temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
                }
            }

            if (!swapped)
                break;
        }
    }

void TopFive(float arr[], int n){
    cout << "top five scores: ";
    int limit = n < 5 ? n : 5;

    for ( int i = n-1; i >= n-limit; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    float arr[100], copy[100];
    cout << "enter no. of students: ";
    cin >> n;

    if( n< 0 || n > 100) {
        cout << "invalid";
        return 0;
    }

    cout << "enter marks: ";

    for (int i =0; i < n; i++) {
        if (arr[i] < 0 || arr[i] > 100) {
            cout << "invalid";
            return 0;
        }
        copy[i] = arr[i];
    }

    SelectionSort(arr, n);
    cout << "sorted marks: ";
    display(arr, n);
    TopFive(arr, n);
    
}