#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Please enter two numbers: " << endl;
    cin >> num1 >> num2;
    try
    {
        if (num2 == 0)
        {
            throw runtime_error("num2 is zero");
        }
        cout << "result: " << num1 / num2;
    }
    catch (runtime_error err)
    {
        cout << err.what();
    }

    return 0;
}