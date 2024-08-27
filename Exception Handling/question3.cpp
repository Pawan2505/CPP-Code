// #include <iostream>
// #include <string>
// using namespace std;

// void divideNumbers(int a, int b)
// {
//     if (b == 0)
//     {
//         throw "Error: Division by zero is not allowed.";
//     }
//     cout << "Result: " << a / b << endl;
// }

// void checkVotingEligibility(int age)
// {
//     if (age < 18)
//     {
//         throw "Error: Age is less than 18. Voting is not allowed.";
//     }
//     cout << "You are eligible to vote." << endl;
// }

// void validatePassword(string password)
// {
//     bool hasUppercase = false;
//     for (char ch : password)
//     {
//         if (isupper(ch))
//         {
//             hasUppercase = true;
//             break;
//         }
//     }
//     if (!hasUppercase)
//     {
//         throw "Error: Password must contain at least one uppercase letter.";
//     }
//     cout << "Password is valid." << endl;
// }

// int main()
// {
//     try
//     {
//         // Scenario 1: Division
//         divideNumbers(10, 0);

//         // Scenario 2: Voting eligibility
//         // checkVotingEligibility(16);

//         // Scenario 3: Password validation
//         // validatePassword("password123");
//     }
//     catch (const char *msg)
//     {
//         cout << msg << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 10;
    int b = 0;
    int result;
    try
    {

        result = a / b;
        throw("Error");
        printf("%d", result);
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }

    return 0;
}