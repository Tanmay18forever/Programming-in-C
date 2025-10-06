#include <stdio.h>

int main() {
    double num1, num2, result;
    char operation, choice;

    do {
        printf("Enter first number: ");
        scanf("%lf", &num1);

        printf("Enter an operation (+, -, *, /): ");
        scanf(" %c", &operation); 

        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (operation) {
            case '+':
                result = num1 + num2;
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid operation.\n");
        }

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    printf("Calculator exited. Goodbye!\n");

    return 0;

}
