#include <stdio.h>

typedef struct Date{
    int dd;
    int mm;
    int yyyy;
} date;

int compare(date d1, date d2){
    if (d1.yyyy == d2.yyyy && d1.mm == d2.mm && d1.dd == d2.dd){
        /* code */
        return 0;
    }
    else if (d1.yyyy > d2.yyyy){
        /* code */
        return 1;
    }
    else if (d1.yyyy == d2.yyyy && d1.mm > d2.mm){
        /* code */
        return 1;
    }
    else if (d1.yyyy == d2.yyyy && d1.mm == d2.mm && d1.dd > d2.dd){
        /* code */
        return 1;
    }
    else{
        return -1;
    }
    
}

int main(){
    date d1 = {18, 4, 2011};
    date d2 = {18, 4, 2011};

    printf("%d\n", compare(d1, d2));

    return 0;
}