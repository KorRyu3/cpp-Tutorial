#include <iostream>
#include <limits>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {

    double balance = 0;
    int choice = 0;

    do {
        std::cout << "*******************" << std::endl;
        std::cout << "Enter your choice: " << std::endl;
        std::cout << "*******************" << std::endl;

        std::cout << "1. Show Balance" << std::endl;
        std::cout << "2. Deposit Money" << std::endl;
        std::cout << "3. Withdraw Money" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();  // エラーフラグをクリア
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // 入力バッファをクリア
            std::cout << "Invalid input. Please enter a number between 1 and 4." << std::endl;
            continue;
        }

        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Thanks for visiting!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice" << std::endl;
        }

    } while(choice != 4);

    return 0;
}


void showBalance(double balance) {
    // 小数点下二桁まで表示
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << std::endl;
}


double deposit() {

    double amount = 0;
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if (amount > 0) {
        return amount;
    } else {
        std::cout << "That's not a valid amount: " << std::endl;
        return 0;
    }

}


double withdraw(double balance) {
    double amount = 0;
    std::cout << "Enter amount to be withdraw: ";
    std::cin >> amount;

    if(amount > balance) {
        std::cout << "insufficient funds" << std::endl;
        return 0;
    } else if (amount < 0) {
        std::cout << "That's not a valid amount" << std::endl;
        return 0;
    } else {
        return amount;
    }

}
