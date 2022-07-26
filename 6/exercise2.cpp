#include <iostream>
using namespace std;

class Matrix
{
    int x[2][2];

public:
    Matrix getTranspose()
    {
        Matrix y;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                y.x[i][j] = x[j][i];
            }
        }

        return y;
    }
    Matrix() {}
    void setMatrix()
    {
        cout << "Enter 2x2 matrix: " << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int k = 0; k < 2; k++)
            {
                cin >> x[i][k];
            }
        }
    }
    void printMatrix()
    {
        cout << "\nTranspose Matrix: " << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << x[i][k] << " ";
            }
            cout << endl;
        }
    }
    friend int operator==(Matrix mat1, Matrix mat2);
};

int operator==(Matrix mat1, Matrix mat2)
{
    int count = 1;
    // mat2.x[2][2]= mat1.getTranspose();
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (mat1.x[i][j] == mat2.x[i][j])
            {
                count++;
            }
        }
    }

    if (count >= 4)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    Matrix a, b;

    a.setMatrix();
    b = a.getTranspose();
    b.printMatrix();

    if (a == b)
    {
        cout << "\nThe matrix is equal to its transpose." << endl;
    }
    else
    {
        cout << "\nThe matrix is not equal to its transpose." << endl;
    }
}
