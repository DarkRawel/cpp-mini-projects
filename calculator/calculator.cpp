#include <iostream>

void showMenu() {
    std::cout << "\n--- Calculator ---\n";
    std::cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    int choice;
    double a, b;

    while (true) {
        showMenu();
        std::cin >> choice;

        if (choice == 5) break;

        std::cout << "Enter two numbers: ";
        std::cin >> a >> b;

        switch (choice) {
            case 1: std::cout << "Result: " << a + b << "\n"; break;
            case 2: std::cout << "Result: " << a - b << "\n"; break;
            case 3: std::cout << "Result: " << a * b << "\n"; break;
            case 4:
                if (b != 0)
                    std::cout << "Result: " << a / b << "\n";
                else
                    std::cout << "Error: Cannot divide by zero!\n";
                break;
            default:
                std::cout << "Invalid option. Try again.\n";
        }
    }

    std::cout << "Goodbye!\n";
    return 0;
}
