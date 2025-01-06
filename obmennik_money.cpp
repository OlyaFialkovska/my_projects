#include <iostream>
#include <iomanip>
using namespace std;

struct money{
    float courseOfcurrency;
    float sumOfMoney;
    float result;
};

float input(string firstWord, string secondWord,float a)
{
    return a;
}
int main()
{
    money first; 
    cout << "Currency for buy:";
    cin >> first.courseOfcurrency;

    cout << "Sum of money:";
    cin >> first.sumOfMoney;

    first.result= first.sumOfMoney/first.courseOfcurrency;

    cout<<first.sumOfMoney << " UAN to " << setprecision(3) << first.result <<" USDT" << endl;

    return 0;
}