#include <iostream>
using namespace std;

int main()
{
    int number,kilometrs,metr;
    cout << "Input number of metrs:";
    cin >> number;
    if(number>0)
    {
        kilometrs= number/1000;
        if(kilometrs>0)
        cout<< "Kilometrs: " << kilometrs << endl;
        metr = number%1000;
        cout<< "Metrs: " << metr << endl;
    }else{
        cout << "Mistake";
    }

}