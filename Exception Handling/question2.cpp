#include <iostream>
#include <string>
using namespace std;
int main()
{
    try
    {
        try
        {
            // string ex("exception");
            // throw ex;
            throw 5;
        }
        catch (string &ex)
        {
            cout << "Inside nested catch block" << endl;
            throw; // Rethrow exception ex
        }
    }
    catch (string &ex)
    {
        cout << "Inside outer catch block " << ex << endl;
    }
    catch (...)
    {
        cout << "Inside outer generic catch block" << endl;
    }
    return 0;
}
