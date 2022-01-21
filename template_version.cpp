#include "header.h"

template<typename T>
void ArrInit(T *arr, int size);

void template_version(int size, int type) {
    arrTool mTool;
    int i = 0;
    int *int_arr;
    float *float_arr;
    double *double_arr;


    switch (type) {
        case 0:
        {
            int_arr = new int[size];
            ArrInit(int_arr, size);
            std::cout << "Arithmetical mean of int array: " << mTool.ArrMean(int_arr, size) << std::endl;
            delete[] int_arr;
            break;
        }

        case 1:
        {
            float_arr = new float[size];
            ArrInit(float_arr, size);
            std::cout << "Arithmetical mean of float array: " << mTool.ArrMean(float_arr, size) << std::endl;
            delete[] float_arr;
            break;
        }

        case 2:
        {
            double_arr = new double[size];
            ArrInit(double_arr, size);
            std::cout << "Arithmetical mean of double array: " << mTool.ArrMean(double_arr, size) << std::endl;
            delete[] double_arr;
            break;
        }

        default:
            break;
    }


    return;
}

template<typename T>
void ArrInit(T *arr, int size) {
    int i = 0;

    std::cout << "Enter array elements: " << std::endl;
    while (i < size) {
        std::cin >> arr[i++];
    }
}

