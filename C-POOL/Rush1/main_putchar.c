
void my_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    rush(0, 0);
    rush(2, 2);
    rush(5, 3);
    rush(5, 1);
    rush(1, 1);
    rush(1, 5);
    rush(4, 4);
    rush(5, 5);
    return 0;
}
