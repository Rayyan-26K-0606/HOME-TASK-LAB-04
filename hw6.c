#include <stdio.h>
#include <math.h>

int main() {
    int choice, num, is_prime;

    do {
        printf("\n1. Even/Odd 2. Prime 3. Square 4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (num % 2 == 0)
                    printf("%d is Even\n", num);
                else
                    printf("%d is Odd\n", num);
                break;
                
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                is_prime = 1;
                
                if (num <= 1) {
                    is_prime = 0;
                } else {
                    for (int i = 2; i <= sqrt(num); i++) {
                        if (num % i == 0) {
                            is_prime = 0;
                            break;
                        }
                    }
                }
                
                if (is_prime)
                    printf("%d is Prime\n", num);
                else
                    printf("%d is not Prime\n", num);
                break;
                
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Square of %d is %d\n", num, num * num);
                break;
                
            case 4:
                break;
                
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}