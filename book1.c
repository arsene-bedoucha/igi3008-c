#include <stdio.h>
#include <stddef.h>
#include <string.h>

typedef struct Book
    {
        char *title;
        char *author;
        long int isbn;
        double price;
    } Book;

int main()
{
    struct Book myBook1 = {"Le Seigneur des anneaux ", "J.R.R. Tolkien ", 2266286269, 18.90};
    struct Book myBook2 = {"Game Of Thrones, Le trône de fer", "George R.R. Martin ", 2290208876, 22.0};

    printf("    size of title field: %zu bytes\n", strlen(myBook1.title));
    printf("    size of author field: %zu bytes\n", strlen(myBook1.author));

    printf("    size of title field: %zu bytes\n", strlen(myBook2.title));
    printf("    size of author field: %zu bytes\n", strlen(myBook2.author));

    return 0;
}