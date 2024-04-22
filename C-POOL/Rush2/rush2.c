/*
** EPITECH PROJECT, 2022
** yes
** File description:
** yes
*/

int my_strlen(char const *str);

void hgg(char **argv, int nb)
{
    int gt = my_strlen(argv[1]);
    int stock = (nb * 10000 / gt);
    int first = (stock / 100);
    int second = (stock % 100);

    my_put_nbr(first);
    my_putchar('.');
    my_put_nbr(second);
    if (second == 0)
        my_putchar('0');
}

int fail(int argc, char **argv)
{
    if (argc <= 2) {
        return 84;
    }
    for (int i = 2; argv[i] != 0; i++) {
        if (my_strlen(argv[i]) != 1) {
            return 84;
        } if (argv[i][0] < 65 || argv[i][0] > 122 ||
              argv[i][0] > 90 && argv[i][0] < 97) {
            return 84;
        }
    }
}

int rush(char **argv, int n)
{
    char *p = argv[1];
    char c = argv[n][0];
    int nb = 0;
    for (int i = 0; p[i] != '\0'; i++) {
        if (c == p[i] || c == p[i] + 32 || c == p[i] - 32) {
            nb++;
        }
    }
    my_putchar(c);
    my_putchar(':');
    my_put_nbr(nb);
    my_putchar(' ');
    my_putchar('(');
    hgg(argv, nb);
    write(1, "%)\n", 3);
    return 0;
}

int main(int argc, char **argv)
{
    if (fail(argc, argv) == 84) {
        return 84;
    }
    for (int i = 2; argv[i] != 0; i++) {
        rush(argv, i);
    }
}
