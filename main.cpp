#include "header.h"



int main(void) {
    int size, type;

    std::cout << "Reference:\n" << "int - 0\n" << "float - 1\n" << "double - 2\n" << "Enter array type: ";
    std::cin >> type;

    if (type > 2 || type < 0) {
        std::cout << "Invalid array type!" << std::endl;

        return 0;
    }

    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    std::cout << std::endl;

    std::cout << "Overload version:" << std::endl;
    overload_version(size, type);

    std::cout << std::endl;

    std::cout << "Template version:" << std::endl;
    template_version(size, type);

    return 0;
}

