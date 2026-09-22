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
