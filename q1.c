


int main() {
    char ch, name[50];
    int a, b;

    printf("Enter a character: ");
    ch = getchar();
    printf("You entered: ");
    putchar(ch);

    printf("\n\nEnter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);
    printf("Quotient = %d\n", a / b);

    while(getchar()!='\n');

    printf("\nEnter your full name: ");
    gets(name);
    printf("Your Name: ");
    puts(name);

    return 0;
}
