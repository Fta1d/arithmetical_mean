#include <iostream>

static int size;

void intArrInit(int *arr);
void floatArrInit(float *arr);
void doubleArrInit(double *arr);

class arrTools {
public:
    virtual int intArrMean(int *arr) = 0;
    virtual float floatArrMean(float *arr) = 0;
    virtual double doubleArrMean(double *arr) = 0;
};

class intArrs: public arrTools {
public:
    int intArrMean(int *arr) {
        int i = 0, sum = 0;

        while (i < size) {
            sum += arr[i++];
        }
        sum = sum / size;

        return sum;
    }

    float floatArrMean(float *arr) {return 0;}
    double doubleArrMean(double *arr) {return 0;}
};

class floatArrs: public arrTools {
public:
    float floatArrMean(float *arr) {
        int i = 0;
        float sum;

        while (i < size) {
            sum += arr[i++];
        }
        sum = sum / size;

        return sum;
    }

    int intArrMean(int *arr) {return 0;}
    double doubleArrMean(double *arr) {return 0;}
};

class doubleArrs: public arrTools {
public:
    double doubleArrMean(double *arr) {
        int i = 0;
        double sum;

        while (i < size) {
            sum += arr[i++];
        }
        sum = sum / size;

        return sum;
    }

    int intArrMean(int *arr) {return 0;}
    float floatArrMean(float *arr) {return 0;}
};


int main(void) {
    arrTools *mTool;
    int type, i = 0;
    int *int_arr;
    float *float_arr;
    double *double_arr;

    std::cout << "Reference:\n" << "int - 0\n" << "float - 1\n" << "double - 2\n" << "Enter array type: ";
    std::cin >> type;

    if (type > 2 || type < 0) {
        std::cout << "Invalid array type!" << std::endl;

        return 0;
    }


    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    switch (type) {
        case 0:
        {
            intArrs I;
            mTool = &I;
            int_arr = new int[size];
            intArrInit(int_arr);
            std::cout << "Arithmetical mean of int array: " << mTool->intArrMean(int_arr) << std::endl;
            delete[] int_arr;
            break;
        }

        case 1:
        {
            floatArrs F;
            mTool = &F;
            float_arr = new float[size];
            floatArrInit(float_arr);
            std::cout << "Arithmetical mean of float array: " << mTool->floatArrMean(float_arr) << std::endl;
            delete[] float_arr;
            break;
        }

        case 2:
        {
            doubleArrs D;
            mTool = &D;
            double_arr = new double[size];
            doubleArrInit(double_arr);
            std::cout << "Arithmetical mean of double array: " << mTool->doubleArrMean(double_arr) << std::endl;
            delete[] double_arr;
            break;
        }

        default:
            break;
    }



    return 0;
}

void intArrInit(int *arr) {
    int i = 0;

    std::cout << "Enter array elements: " << std::endl;
    while (i < size) {
        std::cin >> arr[i++];
    }
}

void floatArrInit(float *arr) {
    int i = 0;

    std::cout << "Enter array elements: " << std::endl;
    while (i < size) {
        std::cin >> arr[i++];
    }
}

void doubleArrInit(double *arr) {
    int i = 0;

    std::cout << "Enter array elements: " << std::endl;
    while (i < size) {
        std::cin >> arr[i++];
    }
}