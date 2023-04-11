#include <iostream>
#include <math.h>

using namespace std;

void add(double a, double b)
{
    double sum;

    sum = a + b;
    cout << "--------------------" << endl;
    cout << a << " + " << b << ", Result = " << sum << endl;
}

void sub(double a, double b)
{
    double sum;

    sum = a - b;
    cout << "--------------------" << endl;
    cout << a << " - " << b << ", Result = " << sum << endl;
}

void multi(double a, double b)
{
    double sum;

    sum = a * b;
    cout << "--------------------" << endl;
    cout << a << " * " << b << ", Result = " << sum << endl;
}

void divide(double a, double b)
{
    double sum;

    if (b == 0)
    {
        cout << "--------------------" << endl;
        cout << "Error! Can not divide by 0!" << endl;
    }
    else
    {
        sum = a / b;
        cout << "--------------------" << endl;
        cout << a << " / " << b << ", Result = " << sum << endl;
    }
}

void sqrtab(double a, double b)
{
    double sum;

    sum = sqrt(a + b);
    cout << "--------------------" << endl;
    cout << "sqrt(" << a << " + " << b << ")"
         << ", Result = " << sum << endl;
}

int main()
{
    int opr, ex;
    double a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "--------------------" << endl;
    cout << "Your numbers: " << a << " , " << b << endl;
    cout << "--------------------" << endl;

    do
    {
        cout << "Select operator: "
                "\n1 = '+'"
                "\n2 = '-'"
                "\n3 = '*'"
                "\n4 = '/'"
                "\n5 = 'sqrt(a+b)'"
                "\n--------------------"
             << endl;
        cout << "Selected operator: ";
        cin >> opr;

        switch (opr)
        {
        case 1:
            add(a, b);
            break;

        case 2:
            sub(a, b);
            break;

        case 3:
            multi(a, b);
            break;
        case 4:
            divide(a, b);
            break;

        case 5:
            sqrtab(a, b);
            break;

        default:
            cout << "\n********************" << endl;
            cout << "* !Wrong operator! *" << endl;
            cout << "********************\n"
                 << endl;
            break;
        }
    } while (opr > 5);

    cout << "--------------------" << endl;
    cout << "0 = Exit calculator"
            "\n1 = Calculate another numbers"
         << endl;
    cout << "--------------------" << endl;
    cout << "Select: ";
    cin >> ex;
    cout << "--------------------" << endl;

    for (int i = 0; i < 3; i++)
    {
        if (ex != 0 && ex != 1)
        {
            cout << "Error! The program will be terminated after 4 incorrect attempts." << endl;
            cout << "--------------------" << endl;
            cout << "Select: ";
            cin >> ex;
            cout << "--------------------" << endl;
        }
    }

    switch (ex)
    {
    case 0:
        return 0;
        break;

    case 1:
        main();
        break;
    }

    return 0;
}