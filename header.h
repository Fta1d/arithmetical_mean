#ifndef ARITHMETICAL_MEAN_HEADER_H
#define ARITHMETICAL_MEAN_HEADER_H

#include <iostream>

void overload_version(int size, int type);
void template_version(int size, int type);

class arrTool {
public:
    template<typename T>
    T ArrMean(T *arr, int size) {
        int i = 0;
        T sum = 0;

        while (i < size) {
            sum += arr[i++];
        }
        sum = sum / size;

        return sum;
    }
};

#endif //ARITHMETICAL_MEAN_HEADER_H
