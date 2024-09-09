#include <stdio.h>

int main() {
    int n, i = 0, grade, sum = 0, total_credit = 0;
    float gpax;

    printf("Enter the number of elements: \t");
    scanf("%d", &n);

    while (i < n) {
        int credit;
        printf("Enter Grade %d: ", i + 1);
        scanf("%d", &grade);
        printf("Enter Credit %d: ", i + 1);
        scanf("%d", &credit);
        printf("================================\n");
        sum += grade * credit; 
        total_credit += credit;
        printf("================================\n");
        i++;  
    }
    gpax = (float)sum / total_credit;
    printf("Total Credit = %d\n", total_credit);
    printf("Total Sum = %d\n",sum);
    
    printf("GPAX = %.7f\n", gpax);

    return 0;
}
