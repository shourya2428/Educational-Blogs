Certainly! Below is an alternate solution in C to find the maximum and minimum of four numbers using `if-else` constructs.

```c
#include <stdio.h>

void find_max_min(int num1, int num2, int num3, int num4, int *max_num, int *min_num) {
    // Finding maximum
    if (num1 >= num2) {
        if (num1 >= num3) {
            if (num1 >= num4) {
                *max_num = num1; // num1 is the max
            } else {
                *max_num = num4; // num4 is the max
            }
        } else {
            if (num3 >= num4) {
                *max_num = num3; // num3 is the max
            } else {
                *max_num = num4; // num4 is the max
            }
        }
    } else {
        if (num2 >= num3) {
            if (num2 >= num4) {
                *max_num = num2; // num2 is the max
            } else {
                *max_num = num4; // num4 is the max
            }
        } else {
            if (num3 >= num4) {
                *max_num = num3; // num3 is the max
            } else {
                *max_num = num4; // num4 is the max
            }
        }
    }

    // Finding minimum
    if (num1 <= num2) {
        if (num1 <= num3) {
            if (num1 <= num4) {
                *min_num = num1; // num1 is the min
            } else {
                *min_num = num4; // num4 is the min
            }
        } else {
            if (num3 <= num4) {
                *min_num = num3; // num3 is the min
            } else {
                *min_num = num4; // num4 is the min
            }
        }
    } else {
        if (num2 <= num3) {
            if (num2 <= num4) {
                *min_num = num2; // num2 is the min
            } else {
                *min_num = num4; // num4 is the min
            }
        } else {
            if (num3 <= num4) {
                *min_num = num3; // num3 is the min
            } else {
                *min_num = num4; // num4 is the min
            }
        }
    }
}

int main() {
    int number1, number2, number3, number4;
    int max_num, min_num;

    // Input from the user
    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d", &number2);
    printf("Enter third number: ");
    scanf("%d", &number3);
    printf("Enter fourth number: ");
    scanf("%d", &number4);

    // Find max and min
    find_max_min(number1, number2, number3, number4, &max_num, &min_num);

    // Print results
    printf("Maximum number is: %d\n", max_num);
    printf("Minimum number is: %d\n", min_num);

    return 0;
}
```

### Explanation:
1. **Function Definition**: The `find_max_min()` function takes four integers as input and pointers for the maximum and minimum values.
2. **Finding Maximum**: The program uses nested `if-else` statements to find the maximum among the four numbers.
3. **Finding Minimum**: It follows a similar logic for finding the minimum value.
4. **User Input**: The program prompts the user to enter four integers and calls the `find_max_min()` function.
5. **Output**: Finally, it prints out the maximum and minimum values.

You can compile and run this code in any standard C programming environment. Just enter four numbers when prompted, and it will display the maximum and minimum values among them.
