
#include <iostream>
using namespace std;
int main()
{
    int a1[3][2], a2[2][3], a3[3][3];

    cout << "Enter the elements of 1st matrix: " << "\n";
    for(int r1 = 0; r1 < 3; r1++)
    {
        for(int c1 = 0; c1 < 2; c1++)
        {
            cin >> a1[r1][c1];
        }
    }
    cout << "\n1st matrix is : " << "\n";
    for(int r1 = 0; r1 < 3; r1++)
    {
        printf("\n");
        for(int c1 = 0; c1 < 2; c1++)
        {
            cout << a1[r1][c1];
            cout << "\t";
        }
    }

    cout << "\n";

    cout << "Enter the elements of 2nd matrix: \n";
    for(int r2 = 0; r2 < 2; r2++)
    {
        for(int c2 = 0; c2 < 3; c2++)
        {
            cin >> a2[r2][c2];
        }
    }
    cout << "\n2nd matrix is : \n";
    for(int r2 = 0; r2 < 2; r2++)
    {
        cout << "\n";
        for(int c2 = 0; c2 < 3; c2++)
        {
            cout << a2[r2][c2];
            cout << "\t";
        }
    }
    int MUL = 0;
    cout << "\nMultiplication of the matrices is : \n";
    for(int r3 = 0; r3 < 3; r3++)
    {
        cout << "\n";
        for(int c3 = 0; c3 < 3; c3++)
        {
           
            for(int r = 0; r < 2; r++)
            {
                MUL = MUL + (a1[r3][r]*a2[r][c3]);   
            }
            a3[r3][c3] = MUL;

            cout << a3[r3][c3];
            cout << "\t";
        }
    }

    return 0;

}