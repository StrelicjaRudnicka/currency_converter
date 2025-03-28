#include <iostream>
#include <iomanip>  
using namespace std;

class CurrencyConverter
{
public:
    void number()
    {
        cout << "1 for British Pound" << endl;
        cout << "2 for US Dollar" << endl;
        cout << "3 for Japanese Yen" << endl;
        cout << "4 for Chinese Yen" << endl;
        cout << "5 for Australian Dollar" << "\n\n";
        cout << "Enter number here: ";
    }

    float getMoney()
    {
        float money;
        cout << "Enter how much Polish Zloty you have:  ";
        cin >> money;
        return money;
    }
};

class Converter : public CurrencyConverter
{
public:
    void convertCurrency(int num)
    {
        float money = getMoney();
        float res = 0.0;

        switch (num)
        {
        case 1:
            res = money * 0.2001;  // British Pound
            break;
        case 2:
            res = money * 0.2591;  // US Dollar
            break;
        case 3:
            res = money * 38.80;   // Japanese Yen
            break;
        case 4:
            res = money * 1.882;   // Chinese Yen
            break;
        case 5:
            res = money * 0.4121;  // Australian Dollar
            break;
        default:
            cout << "Invalid selection." << endl;
            return;
        }
        cout << fixed << setprecision(2);
        cout << money << " PLN is " << res << " in the selected currency." << endl;
    }
};

int main()
{
    Converter obj;
    int num;
    obj.number();  // ask user to choose currency
    cin >> num;
    obj.convertCurrency(num);  // perform the conversion
    return 0;
}
