# Assign explicit values starting from 10 and print them

#include <stdio.h>

enum Status { SUCCESS = 10, FAILURE = 11, TIMEOUT = 12 };

int main() {
    enum Status s = SUCCESS;

    switch (s) {
        case SUCCESS:
            printf("SUCCESS = %d, Operation successful\n", SUCCESS);
            break;
        case FAILURE:
            printf("FAILURE = %d, Operation failed\n", FAILURE);
            break;
        case TIMEOUT:
            printf("TIMEOUT = %d, Operation timed out\n", TIMEOUT);
            break;
    }
    return 0;
}
