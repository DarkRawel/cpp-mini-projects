#include <iostream>

void showMenu() {
    std::cout << "\n--- Length Unit Converter ---\n";
    std::cout << "1. cm to m\n";
    std::cout << "2. m to km\n";
    std::cout << "3. km to m\n";
    std::cout << "4. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    int choice;
    double value;

    while (true) {
        showMenu();
        std::cin >> choice;

        if (choice == 4) break;

        std::cout << "Enter value: ";
        std::cin >> value;

        switch (choice) {
            case 1: std::cout << value << " cm = " << value / 100 << " m\n"; break;
            case 2: std::cout << value << " m = " << value / 1000 << " km\n"; break;
            case 3: std::cout << value << " km = " << value * 1000 << " m\n"; break;
            default: std::cout << "Invalid option.\n";
        }
    }

    std::cout << "Goodbye!\n";
    return 0;
}
