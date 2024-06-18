#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n,sum=0;
    printf("Input Number:");
    scanf("%d",&n);
    int original = n;
    int duplicate = n;
    int len = 0;
    while(n!=0){
        len++;
        n=n/10;
    }
    printf("Length Of Number %d Is: %d\n",original,len);
    while(original!=0){
        int flag = 1,x = (original % 10);
        for(int i=0;i<len;i++){
            flag = flag * x;
        }
        sum = sum + flag;
        original/=10;
    }
    if(sum==duplicate){
        printf("Yes!The Number %d Is An Armstrong Number",duplicate);
    }
    else{
        printf("No!The Number %d Is Not An Armstrong Number",duplicate);

    }
    return 0;
}
