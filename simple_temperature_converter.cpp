#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "************Temperature Convertion**************\n";
    std::cout << "F = Fahrenheit \n";
    std::cout << "C = Celsius \n";
    std::cout << "What unit would like you to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperatur is: " << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp << "C\n";
    }
    else
    {
        std::cout << "Please enter in only F or C\n";
    }

    std::cout << "**************************************************";
    return 0;
}