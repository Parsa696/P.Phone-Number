#include <iostream>
#include <string>
using namespace std;

struct PhoneNumber {
    string number;

    // متود برای اعتبارسنجی شماره تلفن همراه
    bool isValid() {
        // چک کردن طول شماره
        if (number.length() != 11) {
            return false;
        }
        // چک کردن شروع شماره با 09
        if (number.substr(0, 2) != "09") {
            return false;
        }
        // چک کردن اینکه همه کاراکترها عدد هستند
        for (char c : number) {
            if (!isdigit(c)) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    PhoneNumber phone;
    
    // دریافت شماره تلفن از کاربر
    cout << "Enter your mobile phone number: ";
    cin >> phone.number;

    // اعتبارسنجی شماره تلفن همراه
    if (phone.isValid()) {
        cout << "The phone number is valid." << endl;
    } else {
        cout << "The phone number is not valid." << endl;
    }

    return 0;
}
