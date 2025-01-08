#include <iostream>
using namespace std;

int calculate(int number,int i)
{
    switch (i)
    {
        case 1:
        int Hundreds = number / 100;
        return Hundreds;
        case 2:
        int Tens = ( number / 10 ) - number / 100 * 10;
        return Tens;
        case 3:
        int Units = number % 10;
        return Units;
    }

}
void conditions()
{


}

int main()
{
    srand(time(NULL));
    int randomNumber = rand()%1000;

    /* cout<< randomNumber/100 << endl;
    cout<< (randomNumber/10)-randomNumber/100*10 << endl;
    cout<< randomNumber%10 << endl; */

    int inputNumber=-1;
    cout<<"You play in game *Guess number*" << endl;
    int i=8;

    int randomNumberHundreds = calculate(randomNumber,1);
    int randomNumberTens = calculate(randomNumber,2);
    int randomNumberUnits = calculate(randomNumber,3);
    do
    {
        cout<<"You have " << i <<" approach :)" << endl;
        cout<<"Input number from 0 to 1000:";
        cin >> inputNumber;
       
        int inputNumberHundreds =  calculate(inputNumber,1);
        int inputNumberTens =  calculate(inputNumber,2);
        int inputNumberUnits =  calculate(inputNumber,3);

        if (inputNumberHundreds == randomNumberHundreds)
        {
            cout<< "You guess " << inputNumberHundreds << "**" << endl;
        }else if (inputNumberTens == randomNumberHundreds)
        {
            cout<< "You guess " << inputNumberTens << "**" << endl;
        }else if ( inputNumberUnits == randomNumberHundreds)
        {
            cout<< "You guess " << inputNumberUnits << "**" << endl;
        }

        if (inputNumberHundreds == randomNumberTens)
        {
            cout<< "You guess *" << inputNumberHundreds << "*" << endl;
        }else if (inputNumberTens == randomNumberTens)
        {
            cout<< "You guess *" << inputNumberTens << "*" << endl;
        }else if ( inputNumberUnits == randomNumberTens)
        {
            cout<< "You guess *" << inputNumberUnits << "*" << endl;
        }

        if (inputNumberHundreds == randomNumberUnits)
        {
            cout<< "You guess **" << inputNumberHundreds << endl;
        }else if (inputNumberTens == randomNumberUnits)
        {
            cout<< "You guess **" << inputNumberTens << endl;
        }else if ( inputNumberUnits == randomNumberUnits)
        {
            cout<< "You guess **" <<inputNumberUnits << endl;
        }
        
        i--;
    } while (randomNumber!=inputNumber && i>0);

    if(randomNumber==inputNumber)
    {
        cout<<"You are winner. Good job!" << endl;
    }else if(randomNumber!=inputNumber)
    {
        cout<<"Nothing bad. You can try again." << endl;
        cout<<"The right number was "<< randomNumber << endl;
    }

    return 0;
}