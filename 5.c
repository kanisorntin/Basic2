#include <stdio.h>

int main(){
    int mark;
    int numA = 0,numB = 0, numC = 0, numD = 0, numF = 0;

    if(scanf("%d", &mark) != 1){
        return 1;
    }

       while ( 1 ){
        if (mark == -1){
            break;
        }
        if (mark >= 80) {
            numA++; 
        } else if (mark >= 70) {
            numB++; 
        } else if (mark >= 60) {
            numC++; 
        } else if (mark >= 50) {
            numD++; 
        } else {
            numF++;
        }
        if(scanf("%d", &mark) != 1){
            break;
        }
    }
    printf("Grade A Count: %d\n", numA);
    printf("Grade B Count: %d\n", numB);
    printf("Grade C Count: %d\n", numC);
    printf("Grade D Count: %d\n", numD);
    printf("Grade F Count: %d\n", numF);
    return 0;

}