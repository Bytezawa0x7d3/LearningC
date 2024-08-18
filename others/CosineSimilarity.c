#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


void process_string_x(
    char *string_x,
    char ***bigrams,
    unsigned char **vector_x,
    int *length
);

void process_string_y(
    char *string_y,
    char ***bigrams,
    unsigned char **vector_x,
    unsigned char **vector_y,
    int *length
);

double compute_cosine(
    unsigned char *vector_x,
    unsigned char *vector_y,
    int length
);

void free_all(
    char **bigrams,
    unsigned char *vector_x,
    unsigned char *vector_y,
    int length
);


int main(int argc, char **argv) {
    char *string_x = argv[1];
    char *string_y = argv[2];
    unsigned char *vector_x;
    unsigned char *vector_y;
    char **bigrams;
    int length;

    process_string_x(string_x, &bigrams, &vector_x, &length);
    process_string_y(string_y, &bigrams, &vector_x, &vector_y, &length);

    printf("length: %d\n", length);
    printf("String x: %s\n", string_x);
    printf("String y: %s\n", string_y);
    printf("\n");
    
    for (int i = 0; i < length; i++) {
        printf("vector_x[%d] = %d\n", i, vector_x[i]);
        printf("vector_y[%d] = %d\n", i, vector_y[i]);
        printf("bigrams[%d] = %s\n", i, bigrams[i]);
        printf("\n");
    }

    printf("Cosine similarity: %lf\n", compute_cosine(vector_x, vector_y, length));

    free_all(bigrams, vector_x, vector_y, length);

    return 0;
}


void process_string_x(
    char *string_x,
    char ***bigrams,
    unsigned char **vector_x,
    int *length
) {
    *length = strlen(string_x) + 1;
    *vector_x = (unsigned char *) malloc(sizeof(unsigned char) * *length);
    *bigrams = (char **) malloc(sizeof(char *) * *length);

    for (int i = 0; i < *length; i++) {
        (*vector_x)[i] = (unsigned char) 1;
        (*bigrams)[i] = (char *) malloc(sizeof(char) * 3);
        (*bigrams)[i][0] = i == 0 ? '#' : string_x[i - 1];
        (*bigrams)[i][1] = i == strlen(string_x) ? '#' : string_x[i];
        (*bigrams)[i][2] = '\0';
    }
}


void process_string_y(
    char *string_y,
    char ***bigrams,
    unsigned char **vector_x,
    unsigned char **vector_y,
    int *length
) {
    *vector_y = (unsigned char *) malloc(sizeof(unsigned char) * *length);

    for (int i = 0; i < *length; i++) {
        (*vector_y)[i] = (unsigned char) 0;
    }

    for (int i = 0; i < strlen(string_y) + 1; i++) {
        char *gram = (char *) malloc(sizeof(char) * 3);
        gram[0] = i == 0 ? '#' : string_y[i - 1];
        gram[1] = i == strlen(string_y) ? '#' : string_y[i];
        gram[2] = '\0';

        int is_break = 0;

        for (int j = 0; j < *length; j++) {
            if (strcmp((*bigrams)[j], gram) == 0) {
                (*vector_y)[j] = 1;
                is_break = 1;
                free(gram);
                break;
            }
        }

        if (!is_break) {
            *length += 1;
            *vector_x = (unsigned char *) realloc(*vector_x, sizeof(unsigned char) * *length);
            *vector_y = (unsigned char *) realloc(*vector_y, sizeof(unsigned char) * *length);
            *bigrams = (char **) realloc(*bigrams, sizeof(char *) * *length);
            (*vector_x)[*length - 1] = (unsigned char) 0;
            (*vector_y)[*length - 1] = (unsigned char) 1;
            (*bigrams)[*length - 1] = gram;
        }
    }
}


double compute_cosine(
    unsigned char *vector_x,
    unsigned char *vector_y,
    int length
) {
    double dot_product = 0.0;
    double norm_x = 0.0;
    double norm_y = 0.0;

    for (int i = 0; i < length; i++) {
        dot_product += (double) (vector_x[i] * vector_y[i]);
        norm_x += (double) (vector_x[i] * vector_x[i]);
        norm_y += (double) (vector_y[i] * vector_y[i]);
    }

    norm_x = sqrt(norm_x);
    norm_y = sqrt(norm_y);

    return dot_product / (norm_x * norm_y);
}


void free_all(
    char **bigrams,
    unsigned char *vector_x,
    unsigned char *vector_y,
    int length
) {
    for (int i = 0; i < length; i++) {
        free(bigrams[i]);
    }

    free(bigrams);
    free(vector_x);
    free(vector_y);
}


/*

输入两个字符串
through
tought

对两个字符串生成G2
#t th hr ro ou ug gh h#
#t to ou ug gh ht

取两个字符串的G2的交集
#t th hr ro ou ug gh h# to ht

对两个字符串分别生成对应的布尔值向量
#t th hr ro ou ug gh h# to ht
1  1  1  1  1  1  1  1  0  0
1  0  0  0  1  1  1  0  1  1

计算这两个向量的夹角的cosine的值即cosine similarity
dot(x, y) / (mod(x) * mod(y))

*/

/*
grams v1 v2 三个空列表 两个字符串
第一个字符串的#t不在空列表中 添加并设置为1

abcd

#a ab bc cd d#

abcde

#a ab bc cd de e#

Implemented by LI Yikang on 2024-8-19 3:16 AM.
*/