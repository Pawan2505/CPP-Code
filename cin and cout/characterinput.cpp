// #include <cstdio>
// #include <iostream>
// int main(void)
// {
//     int num1;
//     // In C programming language
//     printf("Num1 : ");
//     scanf("%d", &num1);
//     // In C++ programming language
//     std::cout << "Num1 : "<<num1;
//     return 0;
// }

// #include <iostream>
// int main()
// {
//     using namespace std;
//      int num1;
//     cout<< "Num1 : ";
//     cin>> num1;
//     cout<< "Num1 is : " << num1;
//     return 0;
// }

// #include <iostream>
// int main()
// {
//     int num1, num2;
//     using namespace std;
//     cin >> num1 >> num2;
//     cout << num1 << num2 << endl;
//     return 0;
// }



#include <iostream>
#include <iomanip>
int main(void)
{
    using namespace std;
    int num1;
    cout << "Num1 : ";
    cin >> num1;
    clog << "Numerator is accepted" << endl;
    int num2;
    cout << "Num2 : ";
    cin >> num2;
    clog << "Denominator is accepted" << endl;
    if (num2 == 0)
    {
        cerr << "Value of denominator is 0" << endl;
        clog << "Can not calculate Result because value of denominator is 0. " <<endl;
    }
    else
    {
        int result = num1 / num2;
        clog << "Result is calculated" << endl;
        cout << "Result : " << result << endl;
        clog << "Result is printed" << endl;
    }
    return 0;
}