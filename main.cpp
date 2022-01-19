#include <iostream>

int overload();

int pattern();

int main(void) {
    int size, type, i = 0;

    std::cout << "Reference:\n" << "int - 0\n" << "float - 1\n" << "double - 2\n" << "Enter array type: ";
    std::cin >> type;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    switch (type) {
        case 0:
            int *arr = new int[size];
            break;

        case 1:
            float *arr = new float[size];
            break;

        case 2:
            double *arr = new double[size];
            break;

        default:
            std::cout << "Invalid array type!" << std::endl;
            break;
    }

    //float *arr = new float[];

    std::cout << "Enter array elements: ";
    while (i < size) {
        std::cin >> arr[i];
    }

    return 0;
}