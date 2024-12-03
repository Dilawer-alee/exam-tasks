//////////////
////////////////      Task1
//////////////    
//////////////    
////////////////#include <iostream>
////////////////using namespace std;
////////////////
////////////////int main() {
////////////////    int choice;
////////////////    double totalBill = 0;
////////////////
////////////////    do {
////////////////        // Display the menu
////////////////        cout << "\nCafeteria Menu:\n";
////////////////        cout << "1. Tea - $2\n";
////////////////        cout << "2. Coffee - $3\n";
////////////////        cout << "3. Sandwich - $5\n";
////////////////        cout << "4. Burger - $7\n";
////////////////        cout << "5. Exit\n";
////////////////        cout << "Enter your choice (1-5): ";
////////////////        cin >> choice;
////////////////
////////////////    
////////////////        switch (choice) {
////////////////            case 1:
////////////////                totalBill += 2; 
////////////////                cout << "You selected Tea. $2 added to your bill.\n";
////////////////                break;
////////////////            case 2:
////////////////                totalBill += 3; 
////////////////                cout << "You selected Coffee. $3 added to your bill.\n";
////////////////                break;
////////////////            case 3:
////////////////                totalBill += 5; 
////////////////                cout << "You selected Sandwich. $5 added to your bill.\n";
////////////////                break;
////////////////            case 4:
////////////////                totalBill += 7; 
////////////////                cout << "You selected Burger. $7 added to your bill.\n";
////////////////                break;
////////////////            case 5:
////////////////                cout << "Exiting the menu...\n";
////////////////                break; 
////////////////            default:
////////////////                cout << "Invalid choice. Please select a valid option (1-5).\n";
////////////////                break;
////////////////        }
////////////////    } while (choice != 5); 
////////////////
////////////////    
////////////////    cout << "\nYour total bill is: $" << totalBill << "\n";
////////////////    cout << "Thank you for visiting the cafeteria!\n";
////////////////
////////////////    return 0;
////////////////}
//////////////
//////////////
//////////////
////////////////          Task2
//////////////
//////////////
//////////////#include <iostream>
//////////////using namespace std;
//////////////
//////////////int main() {
//////////////    double balance = 1000.0; // Initial balance
//////////////    int choice;
//////////////    double amount;
//////////////
//////////////    do {
//////////////        // Display the ATM menu
//////////////        cout << "\nATM Menu:\n";
//////////////        cout << "1. Check Balance\n";
//////////////        cout << "2. Withdraw Money\n";
//////////////        cout << "3. Deposit Money\n";
//////////////        cout << "4. Exit\n";
//////////////        cout << "Enter your choice (1-4): ";
//////////////        cin >> choice;
//////////////
//////////////        switch (choice) {
//////////////            case 1: // Check Balance
//////////////                cout << "Your current balance is: $" << balance << endl;
//////////////                break;
//////////////
//////////////            case 2: 
//////////////                cout << "Enter the amount to withdraw: $";
//////////////                cin >> amount;
//////////////                if (amount > balance) {
//////////////                    cout << "Insufficient balance. Transaction failed.\n";
//////////////                } else if (amount <= 0) {
//////////////                    cout << "Invalid amount. Please enter a positive value.\n";
//////////////                } else {
//////////////                    balance -= amount;
//////////////                    cout << "You have withdrawn $" << amount << ".\n";
//////////////                    cout << "Your new balance is: $" << balance << endl;
//////////////                }
//////////////                break;
//////////////
//////////////            case 3: 
//////////////                cout << "Enter the amount to deposit: $";
//////////////                cin >> amount;
//////////////                if (amount <= 0) {
//////////////                    cout << "Invalid amount. Please enter a positive value.\n";
//////////////                } else {
//////////////                    balance += amount;
//////////////                    cout << "You have deposited $" << amount << ".\n";
//////////////                    cout << "Your new balance is: $" << balance << endl;
//////////////                }
//////////////                break;
//////////////
//////////////            case 4: 
//////////////                cout << "Thank you for using the ATM. Goodbye!\n";
//////////////                break;
//////////////
//////////////            default: 
//////////////                cout << "Invalid choice. Please select a valid option (1-4).\n";
//////////////                break;
//////////////        }
//////////////    } while (choice != 4);
//////////////
//////////////    return 0;
//////////////}
////////////
//////////////    Task3
////////////
////////////
////////////
////////////#include <iostream>
////////////using namespace std;
////////////
////////////int main() {
////////////    int number;
////////////    int oddCount = 0, evenCount = 0;
////////////
////////////    cout << "Enter numbers (enter 0 to stop):\n";
////////////
////////////    while (true) {
////////////        cin >> number;
////////////
////////////        if (number == 0) {
////////////            break; 
////////////        }
////////////
////////////        if (number % 2 == 0) {
////////////            evenCount++; 
////////////        } else {
////////////            oddCount++; 
////////////        }
////////////    }
////////////
////////////    cout << "\nTotal even numbers: " << evenCount << endl;
////////////    cout << "Total odd numbers: " << oddCount << endl;
////////////
////////////    return 0;
////////////}
////////////
//////////
//////////
////////////       Task4
//////////
//////////
//////////#include <iostream>
//////////using namespace std;
//////////
//////////int main() {
//////////    int choice;
//////////    double num1, num2, result;
//////////
//////////    do {
//////////        // Display the menu
//////////        cout << "\nSimple Calculator Menu:\n";
//////////        cout << "1. Addition\n";
//////////        cout << "2. Subtraction\n";
//////////        cout << "3. Multiplication\n";
//////////        cout << "4. Division\n";
//////////        cout << "5. Exit\n";
//////////        cout << "Enter your choice (1-5): ";
//////////        cin >> choice;
//////////
//////////        switch (choice) {
//////////            case 1: // Addition
//////////                cout << "Enter two numbers: ";
//////////                cin >> num1 >> num2;
//////////                result = num1 + num2;
//////////                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
//////////                break;
//////////
//////////            case 2: // Subtraction
//////////                cout << "Enter two numbers: ";
//////////                cin >> num1 >> num2;
//////////                result = num1 - num2;
//////////                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
//////////                break;
//////////
//////////            case 3: // Multiplication
//////////                cout << "Enter two numbers: ";
//////////                cin >> num1 >> num2;
//////////                result = num1 * num2;
//////////                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
//////////                break;
//////////
//////////            case 4: // Division
//////////                cout << "Enter two numbers: ";
//////////                cin >> num1 >> num2;
//////////                if (num2 == 0) {
//////////                    cout << "Error: Division by zero is not allowed.\n";
//////////                } else {
//////////                    result = num1 / num2;
//////////                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
//////////                }
//////////                break;
//////////
//////////            case 5: // Exit
//////////                cout << "Exiting the calculator. Goodbye!\n";
//////////                break;
//////////
//////////            default: 
//////////                cout << "Invalid choice. Please select a valid option (1-5).\n";
//////////                break;
//////////        }
//////////    } while (choice != 5); 
//////////
//////////    return 0;
//////////}
//////////
////////
////////
////////
////////
//////////            Task5
////////
////////
////////#include <iostream>
////////#include <string> // For string handling
////////using namespace std;
////////
////////int main() {
////////    const string predefinedPassword = "1234"; // Set predefined password
////////    string userPassword;
////////    bool accessGranted = false;
////////
////////    // Allow the user up to 3 attempts
////////    for (int attempts = 1; attempts <= 3; attempts++) {
////////        cout << "Enter your password (Attempt " << attempts << " of 3): ";
////////        cin >> userPassword;
////////
////////        // Check if the entered password matches the predefined password
////////        if (userPassword == predefinedPassword) {
////////            cout << "Access granted\n";
////////            accessGranted = true; // Mark access as granted
////////            break; // Exit the loop
////////        } else {
////////            cout << "Incorrect password. Try again.\n";
////////        }
////////    }
////////
////////    // If access is not granted after 3 attempts, deny access
////////    if (!accessGranted) {
////////        cout << "Access denied\n";
////////    }
////////
////////    return 0;
////////}
//////
//////
//////#include <iostream>
//////using namespace std;
//////
//////int main(){
//////	int num=5;
////////	res -=5;
//////	
//////	for(int i=5; i>=1; i--){
//////		for(int j=i; j>=1; j--){
//////			cout<<j;
//////		}
////////		cout<<j;
//////		cout<<endl;
//////	}
//////}
////
////
////
////
////#include <iostream>
////#include <iomanip> // For formatted output
////using namespace std;
////
////int main() {
////    int n;
////
////    // Prompt the user to enter a positive integer
////    cout << "Enter a positive integer (n): ";
////    cin >> n;
////
////    // Input validation
////    if (n <= 0) {
////        cout << "Please enter a positive integer." << endl;
////        return 1; // Exit the program if input is invalid
////    }
////
////    // Print the table header
////    cout << setw(6) << "Number" << setw(8) << "Square" << setw(6) << "Cube" << endl;
////
////    // Loop to calculate squares and cubes
////    for (int i = 1; i <= n; i++) {
////        int square = i * i;
////        int cube = i * i * i;
////
////        // Display the results
////        cout << setw(6) << i << setw(8) << square << setw(6) << cube << endl;
////    }
////
////    return 0;
////}
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int num;
//
//    // Prompt the user to enter a positive integer
//    cout << "Enter a positive integer: ";
//    cin >> num;
//
//    // Check if the input is a positive number
//    if (num <= 0) {
//        cout << "Please enter a positive integer." << endl;
//        return 1; // Exit the program if input is invalid
//    }
//
//    // Display the divisors of the number
//    cout << "Divisors of " << num << " are: ";
//
//    // Use a for loop to check each number from 1 to the entered number
//    for (int i = 1; i <= num; i++) {
//        if (num % i == 0) { // Check if i divides num evenly
//            cout << i << " "; // Display the divisor
//        }
//    }
//
//    cout << endl; // End the output with a newline
//
//    return 0;
//}
//

