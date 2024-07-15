#include <stdio.h>

struct Employee{
    /* data */
    char name[30];
    float salary;
    int code;
};


int main(){
    struct Employee users[100]; // Creates 100 Employees like we do e1, e2 and stores them all in a array(users)

    users[0].code = 12; // We can Access them like we do in normal Arrays   
    users[1].code = 69;
    
    // We can struct a Employee like this also
    // This Creates a Employee harry like e1, e2
    // And Direct Initializes The Values init
    struct Employee harry = {
        "Raghav", // name
        1200.12, // salary
        12 // code
    }; // We can print these values as normal
    printf("%s %.2f %d\n", harry.name, harry.salary, harry.code);
    return 0;
}