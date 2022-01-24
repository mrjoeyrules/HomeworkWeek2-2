using namespace std;
#include <iostream>
#include <string>

float floatValidation(string inputMessage)
{
    bool loopControl = true;
    string rawValue;
    while (loopControl)
    {
        cout << inputMessage << endl;
        cin >> rawValue;
        try
        {
            float convertedValue = stod(rawValue);
            loopControl = false;
            return convertedValue;
        }
        catch (const std::exception&)
        {
            cout << "Value " << rawValue << " couldn't be converted to Float, Try again" << endl;
        }
    }
}
void userConverter()
{
    double multiplier = 28.35;
    double userInput = floatValidation("Enter the amount of ounces you want to convert: \n");
    double grams = userInput * multiplier;
    cout << userInput << " ounces is approximately " << grams << " grams" << endl;
}

void conversionTable()
{
    int ounces[10] = { 1,2,3,4,5,6,7,8,9,10 };
    double multiplier = 28.35;
    for (size_t z = 0; z < 10; z++)
    {
        cout << ounces[z] << " ounces is " << ounces[z] * multiplier << " grams" << endl;
    }
}
int main()
{
    userConverter();
    conversionTable();
}


