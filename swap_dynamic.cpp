#include <iostream>
using namespace std;
void swap_min(int *m[], unsigned rows, unsigned cols)
{
    int min=m[0][0];
    int indRows=0;
    for(int i =0; i<rows; i++)
    {
        for(int j =0; j<cols; j++)
       {
        if(min>m[i][j])
        {
            min=m[i][j];
            indRows=i;
        }
            
       }
    }
    swap(m[indRows],m[0]);  
}
void deleteMas(int ** m, size_t a)
{
    for(size_t i= 0; i<a; i++)
        delete [] m[i];
}
int main ()
{
    unsigned rows = 3, cols = 4;
    int* m[3];
    for (unsigned i = 0; i < rows; ++i) {
        m[i] = new int[cols];
        for (unsigned j = 0; j < cols; ++j) {
            m[i][j] = i * cols + j + 1; 
        }
    }

    m[2][1] = -1;

    cout << "Before swap:" << endl;
    for (unsigned i = 0; i < rows; ++i) {
        for (unsigned j = 0; j < cols; ++j) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    swap_min(m, rows, cols);


    cout << "After swap:" << endl;
    for (unsigned i = 0; i < rows; ++i) {
        for (unsigned j = 0; j < cols; ++j) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    
    deleteMas(m, rows);
    return 0;
}