/*
** EPITECH PROJECT, 2022
** my evil str
** File description:
** rev a string
*/
int my_strlen1(char const *str)
{
    int counter = 0;
    while (str[counter] != '\0') {
        counter++;
    }
    return (counter);
}

char *my_evil_str(char *str)
{
    int start = 0;
    int end = my_strlen1(str);
    char temp;
    while (start < end / 2) {
        temp = str[start];
        str[start] = str[end - start - 1];
        str[end - start - 1] = temp;
        start++;
    }
    return (str);
}
