#include <iostream>

using namespace std;

double convertToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    double temperature;
    char choice;

    cout << "Temperature Conversion Program" << endl;
    cout << "------------------------------" << endl;

    cout << "Enter the temperature: ";
    cin >> temperature;

    cout << "Convert to (F)ahrenheit or (C)elsius? ";
    cin >> choice;

    switch (choice) {
        case 'F':
        case 'f':
            cout << temperature << " degrees Celsius is equal to " << convertToFahrenheit(temperature) << " degrees Fahrenheit." << endl;
            break;
        case 'C':
        case 'c':
            cout << temperature << " degrees Fahrenheit is equal to " << convertToCelsius(temperature) << " degrees Celsius." << endl;
            break;
        default:
            cout << "Invalid choice. Please select either 'F' or 'C'." << endl;
            break;
    }

    return 0;
}
