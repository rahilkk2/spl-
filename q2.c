#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("\nRelational:\n== %d  != %d  < %d  > %d  <= %d  >= %d\n",
        a==b,a!=b,a<b,a>b,a<=b,a>=b);

    printf("\nLogical:\n&& %d  || %d  !a %d\n",
        a&&b,a||b,!a);

    printf("\nBitwise:\n& %d  | %d  ^ %d  ~a %d  <<1 %d  >>1 %d\n",
        a&b,a|b,a^b,~a,a<<1,a>>1);

    return 0;
}
