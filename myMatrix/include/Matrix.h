#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
using namespace std;

class Matrix
{
    private:
        //Row length
        int xLength;
        //Column Length
        int yLength;
        //2D array pointr
        int** arrPtr;

    public:
        //default CTOR
        Matrix();
        //1D array CTOR
        Matrix(int y);
        //2D array CTOR
        Matrix(int x, int y);
        //Copy CTOR
        Matrix(const Matrix& other);
        //DTOR
        virtual ~Matrix();

        //Setter and Getter for Elemnts(cells)
        bool setElement(int x, int y, int value);
        int getElement(int x, int y)const;
        //Print Matrix
        void print()const;
};

#endif // MATRIX_H
