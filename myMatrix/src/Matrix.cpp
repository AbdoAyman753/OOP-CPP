#include "Matrix.h"
//Default CTOR
Matrix::Matrix():xLength(0),yLength(0),arrPtr(nullptr)
{}

//1D array CTOR ----- Allocate memory for the array of pointers that will store the reference to arrays.
Matrix::Matrix(int y):xLength(1),yLength(y),arrPtr(new int*[1]){

    //Allocate memory to each row of the 1D array.
    for(int i = 0; i < Matrix::xLength; i++) {
        Matrix::arrPtr[i] = new int[Matrix::yLength+1];
    }
    //Initialize the Matrix to 0 and
    //adding Null terminal to the end of row.
    for(int i = 0; i < Matrix::xLength; i++){
        for(int j = 0; j <= Matrix::yLength; j++){
            if(j == Matrix::yLength)
                Matrix::arrPtr[i][j] = '\0';
            Matrix::arrPtr[i][j] = 0;
        }
    }
}

//2D array CTOR ----- Allocate memory for the array of pointers that will store the reference to arrays.
Matrix::Matrix(int x, int y):xLength(x),yLength(y),arrPtr(new int*[xLength]){
    //Allocate memory to each row of the 2D array.
    for(int i = 0; i < Matrix::xLength; i++) {
        Matrix::arrPtr[i] = new int[Matrix::yLength+1];
    }

    //Initialie the Matrix to 0 and
    //adding Null terminal to the end of each row.
    for(int i = 0; i < Matrix::xLength; i++){
        for(int j = 0; j <= Matrix::yLength; j++){
            if(j == yLength)
                Matrix::arrPtr[i][j] = '\0';
            Matrix::arrPtr[i][j] = 0;
        }
    }
}

//Copy CTOR
Matrix::Matrix(const Matrix& other):xLength(other.xLength),yLength(other.yLength),arrPtr(new int*[xLength]){
    for(int i = 0; i < Matrix::xLength; i++) {
        Matrix::arrPtr[i] = new int[Matrix::yLength+1];
    }
    for(int i = 0; i < Matrix::xLength; i++){
        for(int j = 0; j <= Matrix::yLength; j++){
            if(j == yLength)
                Matrix::arrPtr[i][j] = '\0';
            Matrix::arrPtr[i][j] = other.getElement(i,j);
        }
    }
}

//DTOR
Matrix::~Matrix(){
    //Free the allocated memory for each row.
    for(int i = 0; i < Matrix::xLength; i++) {
        delete[] Matrix::arrPtr[i];
    }
    //Delete the pointer to the array of pointer.
    delete[] Matrix::arrPtr;
}

bool Matrix::setElement(int x, int y, int value){
    if(x < Matrix::xLength && y < Matrix::yLength){
        Matrix::arrPtr[x][y] = value;
        return true;
    }
    return false;
}

int Matrix::getElement(int x, int y)const{
    if(x < Matrix::xLength && y < Matrix::yLength){
        return Matrix::arrPtr[x][y];
    }
    return 0;
}

void Matrix::print()const{
    for(int i = 0; i < Matrix::xLength; i++){
        for(int j = 0; j < Matrix::yLength; j++){
            cout<<"| "<<Matrix::arrPtr[i][j]<<" |";
        }
        cout<<endl;
    }
}
