#include <stdio.h>
#include <math.h>   // for ceil() to round up the number of motors we need if the calculation was in decimal

int main() {
    int motors;        // integer "whole number" for motors because the motors should be integer
    float weight;      // float "decimal number" for package weight, becuase the weight can be in decimal
    float loadPerMotor; // how many kg loaded for each motor
    int minMotors; // minimum motor needed for this load

    // Ask the user for number of motors
    printf("How many motors are carrying the packages? ");
    scanf("%d", &motors); // %d = integer format specifier

    // Ask the user for package weight
    printf("How many kg of packages do we expect? ");
    scanf("%f", &weight);  // %f = float format specifier

    // Calculate load per motor
    loadPerMotor = weight / motors; // load for each motor

    // Calculate minimum motors required
    minMotors = (int)ceil(weight / 5.6); // minimum motor needed for this load

    // Check if conveyor belt can carry the load
    if (loadPerMotor <= 5.6) {
        printf("✅Yes! The conveyor belt can carry the packages.\n");
        printf("We recommend using at least %d motors for this load.\n", minMotors);
    } else {
        printf(" ❌No. The conveyor belt cannot carry the packages.\n");
        printf("You need at least %d motors to carry this load safely.\n", minMotors);
    }

    return 0;
}
