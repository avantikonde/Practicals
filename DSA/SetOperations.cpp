#include<iostream>
using namespace std;

int main()
{
    int M, n, Roll;

    cout << "Enter total number of Students: ";
    cin >> M;

    if(M < 1 || M > 100)
    {
        cout << "Invalid number of students";
        return 0;
    }

    // Creating 2 arrays
    int A[101] = {0}, B[101] = {0};

    // Cricket input
    cout << "Enter number of Students who play cricket: ";
    cin >> n;

    if(n < 0 || n > M)
    {
        cout << "Invalid input";
        return 0;
    }

    cout << "Enter their Roll no.: ";

    for(int i = 0; i < n; i++)
    {
        cin >> Roll;

        if(Roll >= 1 && Roll <= M)
            A[Roll] = 1;
    }

    // Badminton input
    cout << "Enter number of Students who play badminton: ";
    cin >> n;

    if(n < 0 || n > M)
    {
        cout << "Invalid input";
        return 0;
    }

    cout << "Enter their Roll no.: ";

    for(int i = 0; i < n; i++)
    {
        cin >> Roll;

        if(Roll >= 1 && Roll <= M)
            B[Roll] = 1;
    }

    int neither = 0;
    bool found;

    // Union
    cout << "\nStudents who play cricket or badminton: ";
    found = false;

    for(int i = 1; i <= M; i++)
    {
        if(A[i] == 1 || B[i] == 1)
        {
            cout << i << " ";
            found = true;
        }
    }

    if(!found)
        cout << "None";

    // Intersection
    cout << "\nStudents who play both cricket and badminton: ";
    found = false;

    for(int i = 1; i <= M; i++)
    {
        if(A[i] == 1 && B[i] == 1)
        {
            cout << i << " ";
            found = true;
        }
    }

    if(!found)
        cout << "None";

    // Only cricket
    cout << "\nStudents who play only cricket: ";
    found = false;

    for(int i = 1; i <= M; i++)
    {
        if(A[i] == 1 && B[i] == 0)
        {
            cout << i << " ";
            found = true;
        }
    }

    if(!found)
        cout << "None";

    // Only badminton
    cout << "\nStudents who play only badminton: ";
    found = false;

    for(int i = 1; i <= M; i++)
    {
        if(A[i] == 0 && B[i] == 1)
        {
            cout << i << " ";
            found = true;
        }
    }

    if(!found)
        cout << "None";

    // Neither
    for(int i = 1; i <= M; i++)
    {
        if(A[i] == 0 && B[i] == 0)
        {
            neither++;
        }
    }

    cout << "\nNumber of students who play neither: "
         << neither;

    return 0;
}



