#include <stdio.h>

int main(){
    float p = 33, c = 45, m = 45;
    
    float result = ((p + c + m) / 300) * 100;
    float presult = (p / 100) * 100;
    float cresult = (c / 100) * 100;
    float mresult = (m / 100) * 100;
    if (result > 40 && (presult > 33 && cresult > 33 & mresult > 33)){
        /* code */
        printf("You are Passed with the Percentage : %f\n", result);
    }else{
        printf("You are Failed, Because Your percentage is %f\n", result);
    }
    
    return 0;
}