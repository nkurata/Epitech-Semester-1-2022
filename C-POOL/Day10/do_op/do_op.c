/*
** EPITECH PROJECT, 2022
** do-op
** File description:
** do-op
*/
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(const char *str);
int my_getnbr(char const *str);

int do_op(char **argv)
{
    if (argv[2][0] == '+') {
        my_put_nbr(my_getnbr(argv[1]) + my_getnbr(argv[3]));
    } if (argv[2][0] == '-') {
        my_put_nbr(my_getnbr(argv[1]) - my_getnbr(argv[3]));
    } if (argv[2][0] == '*') {
        my_put_nbr(my_getnbr(argv[1]) * my_getnbr(argv[3]));
    } if (argv[2][0] == '/') {
        my_put_nbr(my_getnbr(argv[1]) / my_getnbr(argv[3]));
    } if (argv[2][0] == '%') {
        my_put_nbr(my_getnbr(argv[1]) % my_getnbr(argv[3]));
    }
}

int main(int argc, char **argv)
{
    int op = argv[2][0];
    if (argc != 4) {
        return 84;
    } if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%') {
        my_put_nbr(0);
        my_putchar('\n');
        return 84;
    } if (op == '/' && my_getnbr(argv[3]) == 0) {
        my_putstr("Stop: division by zero\n");
        return 84;
    } if (op == '%' && my_getnbr(argv[3]) == 0) {
        my_putstr("Stop: modulo by zero\n");
        return 84;
    }
    do_op(argv);
    my_putchar('\n');
    return 0;
}
