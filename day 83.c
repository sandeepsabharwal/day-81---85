# Create an enum for months and print how many days each month has

#include <stdio.h>

enum Month {
    JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    enum Month m = FEBRUARY;

    switch (m) {
        case JANUARY: case MARCH: case MAY: case JULY:
        case AUGUST: case OCTOBER: case DECEMBER:
            printf("31 days\n");
            break;
        case APRIL: case JUNE: case SEPTEMBER: case NOVEMBER:
            printf("30 days\n");
            break;
        case FEBRUARY:
            printf("28 or 29 days\n");
            break;
    }
    return 0;
}
