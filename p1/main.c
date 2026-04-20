#include <stdio.h>

int main(void)
{
    int count = 0;
    int ans;
    int guess;
    
    scanf("%d", &ans);
    
    do { 
        scanf("%d", &guess);
        count++;
        if (guess>ans) printf("%d>?\n", guess);
        else if (guess<ans) printf("%d<?\n", guess);
    } while (ans!=guess);


    printf("%d==?\n", ans);
    printf("%d\n", count);
    return 0;
}
