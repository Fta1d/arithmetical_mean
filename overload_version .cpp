#include "header.h"

void ArrInit(int *arr, int size);
void ArrInit(float *arr, int size);
void ArrInit(double *arr, int size);

void overload_version(int size, int type) {
    arrTools *mTool;
    int i = 0;
    int *int_arr;
    float *float_arr;
    double *double_arr;


    switch (type) {
        case 0:
        {
            intArrs I;
            mTool = &I;
            int_arr = new int[size];
            ArrInit(int_arr, size);
            std::cout << "Arithmetical mean of int array: " << mTool->intArrMean(int_arr, size) << std::endl;
            delete[] int_arr;
            break;
        }

        case 1:
        {
            floatArrs F;
            mTool = &F;
            float_arr = new float[size];
            ArrInit(float_arr, size);
            std::cout << "Arithmetical mean of float array: " << mTool->floatArrMean(float_arr, size) << std::endl;
            delete[] float_arr;
            break;
        }

        case 2:
        {
            doubleArrs D;
            mTool = &D;
            double_arr = new double[size];
            ArrInit(double_arr, size);
            std::cout << "Arithmetical mean of double array: " << mTool->doubleArrMean(double_arr, size) << std::endl;
            delete[] double_arr;
            break;
        }

        default:
            break;
    }


    return;
}

void ArrInit(int *arr, int size) {
    int i = 0;

    std::cout << "Enter array elements: " << std::endl;
    while (i < size) {
        std::cin >> arr[i++];
    }
}

void ArrInit(float *arr, int size) {
    int i = 0;

    std::cout << "Enter array elements: " << std::endl;
    while (i < size) {
        std::cin >> arr[i++];
    }
}

void ArrInit(double *arr, int size) {
    int i = 0;

    std::cout << "Enter array elements: " << std::endl;
    while (i < size) {
        std::cin >> arr[i++];
    }
}