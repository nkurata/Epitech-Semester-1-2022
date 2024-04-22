/*
** EPITECH PROJECT, 2023
** B-CPE-110-PAR-1-2-antman-luca.martinet
** File description:
** main.c
*/

#include "../include/antman.h"

int array_length(char** array) {
    int count = 0;
    while (array[count] != NULL) {
        count++;
    }
    return count;
}

char** create_array(char* string)
{
    int word_count = 1;
    for (int i = 0; i < my_strlength(string); i++) {
        if (string[i] == ' ') {
            word_count++;
        }
    }
    char** words = (char**) malloc(word_count * sizeof(char*));
    int start = 0;
    int word_index = 0;
    int check = 0;
    for (int i = 0; i < my_strlength(string); i++) {
        //printf("%s -", "test1");
        if (string[i] == ' ') {
            //printf("%s -", "test2");
            for (int j = 1; words[j] != NULL || words[0] == NULL ; j++) {//
                // printf("%s -", "test3");
                char *word = malloc(sizeof(char) * 5);
                int k;
                for (k = 0; string[start + k] != ' '; k++)
                    //printf("%s -", "test4");
                    word[k] = string[start + k];
                word[k] = '\0';
                if (my_strcmp(words[j], word) != 0) {
                    //printf("%s -", "test5");
                    int word_length = i - start;
                    words[word_index] = (char *) malloc((word_length + 1) * sizeof(char));
                    my_strncpy(words[word_index], string + start, word_length);
                    words[word_index][word_length] = '\0';
                    start = i + 1;
                    word_index++;
                }
            }
        }
    }
    int word_length = my_strlength(string) - start;
    words[word_index] = (char*) malloc((word_length + 1) * sizeof(char));
    my_strncpy(words[word_index], string + start, word_length);
    words[word_index][word_length] = '\0';
    return words;
}

char *compress(char *buf, size_t size)
{
    char *bufout = malloc(sizeof(char) * (size + 1));
    char **arr = create_array(buf);
    for (int i = 0; arr[i] != NULL; i++)
        printf("%s /", arr[i]);
    return bufout;
}

int main(int ac, char **av)
{
    int input = open(av[1], O_RDONLY); // opening input file
    if (input == -1)
        return 84;
    int output = open(av[2], O_WRONLY | O_CREAT); // opening output file (compressed.data)
    struct stat st;
    if(stat(av[1], &st) == -1)
        return 84;
    int size = st.st_size; // length
    char *buf = malloc(sizeof(char) * (size + 1));
    if (read(input, buf, size) <= 0)
        return 84;
    buf[st.st_size] = '\0';
    char *buffer = compress(buf, size);
    printf("%s\n", buffer);
    int compressed_size = size; // the size of the compressed data
    if (write(output, buffer, compressed_size) <= 0)
        return 84;
    printf("%s\n", "test6");
    close(input);
    close(output);
    free(buf);
    free(buffer);
    return 0;
}

