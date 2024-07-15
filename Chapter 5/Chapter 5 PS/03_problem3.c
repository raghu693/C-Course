#include <stdio.h>

float force(float);

float force(float a){
    return a * 9.8;
}

int main(){
    // 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2
    float mass = 110.00;
    float a = force(mass);
    printf("The force of attraction on a body of mass %.2f kg exerted by Earth is: %.2f N\n", mass, a);
    return 0;
}