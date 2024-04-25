//ASSESMENT 2
#include <iostream>
#include <ctime> 
using namespace std;

class ATM {

    const int ATM_PIN = 12345; 
    const int MAX_ATTEMPTS = 1; 
    int attempts = 0; 
    double startingBalance = 60000; 
    double currentBalance = 20000; 
    string accountHolderName = "Rakesh Kharva";
    string accountHolderAddress = "Mumbai";
    string branchLocation = "Andheri";
    int accountNumber = 5678;

public:
    
    ATM() {
        welcomeScreen(); 
    }

   
    void welcomeScreen() {
        
        time_t now = time(0);
        char* dt = ctime(&now);
        cout << "\n\n=====================Welcome to Our Bank ATM======================\n" << endl;
        cout << "                       ============================             \n";
        cout << "Current Date and Time: " << dt << endl;
        cout << "                        ==========================          \n" << endl;
        cout << "\n================================================================           \n\n" << endl;
        cout << " Press 1 and Then Press Enter to Access Your Account Via Pin Number\n\t\tor\n Press 0 and press Enter to get Help.";
        int choice;
        cin >> choice;
        
        if(choice == 0) {
            helpScreen();
        } else if(choice == 1) {
            accountAccess();
        } else {
            cout << "Invalid choice. Please try again." << endl;
            welcomeScreen();
        }
    }

   
    void accountAccess() {
        cout << "==========================ATM ACCOUNT ACCESS========================\n" << endl;
        cout << "Enter Your Account PIN Number! [Only one attempt is allowed] ";
        
        int pin;
        cout<< " \n====================================================\n";
        cin >> pin;
        
        if(pin == ATM_PIN) {
            menuScreen();
        } else {
            attempts++;
            if(attempts >= MAX_ATTEMPTS) {
                cout << "===============THANK YOU=================" << endl;
                cout << "You have made maximum failed attempts. No more attempts allowed!! Sorry!!" << endl;
                return;
            }
            cout << "Incorrect PIN. Please try again." << endl;
            accountAccess();
        }
    }

    
    void helpScreen() {
        cout << "======================ATM ACCOUNT STATUS========================\n" << endl;
        cout << "You must have the correct pin number to access this account. ";
        cout << "See your bank representative for assistance during bank opening hours. Thanks for your choice today!!" << endl;
        cout << "Press any key to continue" << endl;
        cin.ignore(); 
        cin.get(); 
        welcomeScreen();
    }

    
    void menuScreen() {
        int choice;
        cout << "============================ATM Main Menu Screen=========================\n" << endl;
        cout << "Enter [1] To Deposit Cash" << endl;
        cout << "Enter [2] To Withdraw Cash" << endl;
        cout << "Enter [3] To Check Balance" << endl;
        cout << "Enter [0] to Exit ATM" << endl;
        cout << "PLEASE ENTER A SELECTION AND PRESS RETURN KEY: ";
        cin >> choice;

        switch(choice) {
            case 0:
                cout << "Thank you for using ATM. Goodbye!" << endl;
                return;
            case 1:
                depositScreen();
                break;
            case 2:
                withdrawScreen();
                break;
            case 3:
                balanceInquiry();
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                menuScreen();
        }
    }

    
    void depositScreen() {
        cout << "ATM ACCOUNT DEPOSIT SYSTEM" << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Holder Address: " << accountHolderAddress << endl;
        cout << "Branch Location: " << branchLocation << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout<< " \n====================================================\n";
        cout << "Present available balance: Rs. " << currentBalance << endl;
        cout << "Enter the Amount to be Deposited: Rs. ";

        double depositAmount;
        cin >> depositAmount;

        currentBalance += depositAmount;
        cout << "Your new available balance is Rs. " << currentBalance << endl;
        cout << "Thank you!" << endl;
        cin.ignore(); 
        cin.get(); 
        menuScreen();
    }

    
    void withdrawScreen() {
        cout << "ATM ACCOUNT WITHDRAWAL" << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Holder Address: " << accountHolderAddress << endl;
        cout << "Branch Location: " << branchLocation << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout<< " \n====================================================\n";
        cout << "Present available balance: Rs. " << currentBalance << endl;
        cout << "Enter the Amount to be Withdrawn: Rs. ";

        double withdrawAmount;
        cin >> withdrawAmount;

        if (withdrawAmount > currentBalance) {
            cout << "Insufficient available balance in your account. Sorry!" << endl;
        } else {
            currentBalance -= withdrawAmount;
            cout << "Your new available balance is Rs. " << currentBalance << endl;
            cout << "Thank you!" << endl;
        }
        cin.ignore(); 
        cin.get(); 
        menuScreen();
    }

    
    void balanceInquiry() {
        cout << "ATM ACCOUNT BALANCE INQUIRY" << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Holder Address: " << accountHolderAddress << endl;
        cout << "Branch Location: " << branchLocation << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Available balance: Rs. " << currentBalance << endl;
        cout << "Thank you!" << endl;
        cin.ignore(); 
        cin.get(); 
        menuScreen();
    }
};

int main() {
    ATM atm; 
    return 0;
}

