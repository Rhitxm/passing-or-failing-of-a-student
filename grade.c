#include <stdio.h>

int main() {
    int marks;
   printf("enter your marks:");
    scanf("%d", &marks);
    if (marks>30){
        printf("PASS\n");
    }
    else if (marks<=30){
        printf("FAIL\n");
    }
    return 0;
}
//another similar program
int main() {
    int marks;
   printf("enter your marks:");
    scanf("%d", &marks);
    if (marks<30){
        printf("C Grade\n");
    }
    else if (30<=marks && marks<70){
        printf("B Grade\n");
    }
    else if (70<=marks && marks<90){
        printf("A Grade\n");
    }
    else if (90<=marks && marks<=100){
        printf("A+ Grade\n");
    }
    else{
        printf("invalid\n");
    }
        
    return 0;
}
