## Project Description
This program checks whether a conveyor belt system can safely carry a given package load.
Each motor can handle 5.6 kg of weight.
In addition to the required functionality, I also implemented an extra feature that calculates the load per motor and recommends the minimum number of motors required.
This was not part of the original assignment, but I added it to improve efficiency by helping reduce unnecessary energy consumption
ensuring we don’t run motors that are not really needed.

## Features
- Takes user input for:
   Number of motors available , Total package weight (kg)
- Calculates the load per motor
- Checks if the system can safely carry the load
- Suggests the minimum number of motors required

## Files
- `main.c` → The source code of the program  
- `README.md` → This documentation

## How to Compile and Run

## Compile
## option 1:

gcc main.c
.\a.exe

## option 2:
Since I had some issues running C code in VSCodium, 
I tested and ran the program using an online C compiler (such as https://www.programiz.com/c-programming/online-compiler/)

## **Note**:
i used #include <math.h>   // for ceil() to round up the number of motors required when the calculation results in a decimal.
For example, if 20.4 kg is divided by 5.6 kg per motor, the result is 3.64. Using ceil() ensures the program correctly rounds up to 4 motors, since a fraction of a motor is not possible.
