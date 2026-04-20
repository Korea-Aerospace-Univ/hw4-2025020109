#include <stdio.h>

int main(void)
{
    int N;
    char ch;
    int lower_cnt=0, lower_max=0;
    int digit_cnt=0, digit_max=0;
 
    scanf("%d", &N);
    getchar();
    
    for(int i=1;i<=N;i++) {
        scanf("%c", &ch);
        
        if (ch>='a' && ch<='z') {
           lower_cnt++;
           digit_cnt = 0;
           if (lower_cnt > lower_max) lower_max = lower_cnt;
        }
        
        else if (ch>='0' && ch<='9') {
            digit_cnt++;
            lower_cnt = 0;
            if (digit_cnt > digit_max) digit_max = digit_cnt;
        }
            
    }
    printf("%d\n", lower_max);
    printf("%d\n", digit_max);

    return 0;
}
