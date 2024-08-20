#include <iostream>
#include <string>
using namespace std;
class ArithmeticException
{
private:
    string message;
    int lineNumber;
    string functionName;
    string fileName;

public:
    ArithmeticException(string message, int lineNumber, string functionName, string fileName)
        : message(message), lineNumber(lineNumber), functionName(
                                                        functionName),
          fileName(fileName)
    {
    }
    void printStackTrace()
    {
        cout << this->message << " in " << this->fileName << ":" << this->functionName << " at line no. " << this->lineNumber << endl;
    }
};
void accept_record(int &number)
{
    cout << "Number : ";
    cin >> number;
}
int calculate(int num1, int num2)
{
    if (num2 == 0)
        throw ArithmeticException("Divide by zero exception", __LINE__,
                                  __FUNCTION__, __FILE__);
    return num1 / num2;
}
void print_record(int &result)
{
    cout << "Result : " << result << endl;
}
int main(void)
{
    try
    {
        int num1;
        accept_record(num1);
        int num2;
        accept_record(num2);
        int result = calculate(num1, num2);
        print_record(result);
    }
    catch (ArithmeticException &ex)
    {
        ex.printStackTrace();
    }
    return 0;
}