#include <iostream>
using namespace std;
#include <cstdlib>

int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
    int ** Mt = new int *[cols];
    for(size_t i=0; i!=cols; i++)
        Mt[i]=new int [rows];
    for(int i=0;i<cols;i++){
       for(int j=0;j<rows;j++){
        Mt[i][j]=m[j][i];
       } 
    }
    return Mt;
}

void deleteMas(int ** m, size_t a)
{
    for(size_t i= 0; i<a; i++)
        delete [] m[i];
    delete []m;
}
int main ()
{
    int rows=4,cols=3;
    const int row1[] = {1, 2, 3};
    const int row2[] = {4, 5, 6};
    const int row3[] = {7, 8, 9};
    const int row4[] = {10, 11, 12};
    const int * const mas[] = {row1, row2, row3, row4}; 
    const int * const * m = mas; 
    
    int **M = transpose(m,rows,cols);

    for(int i=0;i<cols;i++){
       for(int j=0;j<rows;j++){
        cout << M[i][j] << " ";
        }
        cout << endl;
    }

    deleteMas(M, rows);
    return 0;
}
