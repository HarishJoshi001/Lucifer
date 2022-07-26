#include <iostream>
using namespace std;

class Matrix
{
    int mat[2][2];

public:
    Matrix() {}
    friend Matrix operator*(Matrix mat1, Matrix mat2);

    void setMatrix()
    {
        cout << "Enter 2x2 matrix: " << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int k = 0; k < 2; k++)
            {
                cin >> mat[i][k];
            }
        }
    }

    void printMatrix()
    {
        cout << "\nMatrix Multiplication: " << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << mat[i][k] << " ";
            }
            cout << endl;
        }
    }
};

Matrix operator*(Matrix mat1, Matrix mat2)
{
    {
        Matrix mult;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                mult.mat[i][j] = 0;
            }
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                for (int k = 0; k < 2; k++)
                {
                    mult.mat[i][j] += (mat1.mat[i][k] * mat2.mat[k][j]);
                }
            }
        }
        return mult;
    }
}

int main()
{
    Matrix a, b, c;
    a.setMatrix();
    b.setMatrix();
    c = a * b;
    c.printMatrix();

    return 0;
}
