#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char oprator;
    // float modulas;

    cout << "Enter the first Number: " << endl;
    cin >> num1;

    cout << "Enter the second Number: " << endl;
    cin >> num2;

    cout << "choose the oprator within * , / , + ,- ,% : " << endl;
    cin >> oprator;

    int cngoprator1 = num1; //<<--this is change the data type for using modulas oprator-->>
    int cngoprator2 = num2; // <<-- same thing -->>
    switch (oprator)
    {
    case '+':
        cout << "the value is: " << num1 + num2 << endl;
        break;

    case '-':
        cout << "the value is: " << num1 - num2 << endl;
        break;

    case '*':
        cout << "the value is: " << num1 * num2 << endl;
        break;

    case '/':
        cout << "the value is: " << num1 / num2 << endl;
        break;

    case '%':

        if (num2 != 0)  //<<-- this is chacking for number not divisable by zero -->>
        {
            cout << "Result: " << cngoprator1 % cngoprator2 << endl;
        }
        else
        {
            cout << "Error: Modulus by zero!" << endl;
        }
        break;

    default:
        cout << "Somthig error !" << endl;
        break;
    };

    return 0;
}