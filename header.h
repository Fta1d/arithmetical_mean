#ifndef ARITHMETICAL_MEAN_HEADER_H
#define ARITHMETICAL_MEAN_HEADER_H

#include <iostream>

void overload_version(int size, int type);
void template_version(int size, int type);

class arrTools {
public:
    virtual int intArrMean(int *arr, int size) = 0;
    virtual float floatArrMean(float *arr, int size) = 0;
    virtual double doubleArrMean(double *arr, int size) = 0;
};

class intArrs: public arrTools {
public:
    int intArrMean(int *arr, int size) {
        int i = 0, sum = 0;

        while (i < size) {
            sum += arr[i++];
        }
        sum = sum / size;

        return sum;
    }

    float floatArrMean(float *arr, int size) {return 0;}
    double doubleArrMean(double *arr, int size) {return 0;}
};

class floatArrs: public arrTools {
public:
    float floatArrMean(float *arr, int size) {
        int i = 0;
        float sum;

        while (i < size) {
            sum += arr[i++];
        }
        sum = sum / size;

        return sum;
    }

    int intArrMean(int *arr, int size) {return 0;}
    double doubleArrMean(double *arr, int size) {return 0;}
};

class doubleArrs: public arrTools {
public:
    double doubleArrMean(double *arr, int size) {
        int i = 0;
        double sum;

        while (i < size) {
            sum += arr[i++];
        }
        sum = sum / size;

        return sum;
    }

    int intArrMean(int *arr, int size) {return 0;}
    float floatArrMean(float *arr, int size) {return 0;}
};

#endif //ARITHMETICAL_MEAN_HEADER_H
