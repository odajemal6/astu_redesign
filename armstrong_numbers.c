#include "armstrong_numbers.h"
#include <stdio.h>
#include <math.h>

main(){
    double num;
    int sum;
    int count;
    int digit;
        printf("Enter number: ", num);
        scanf("%d", &num);

        while (num != 0) {
            num /= 10;
            ++count;
        }
        printf("count %d\n", count);

        while (num != 0) {
            digit = num % 10;
            sum += pow(digit,count);
            num = num / 10;
            printf("the nmuber %d\n", sum);
        }
        printf("the number %d\n",sum);


        return 0;
}
