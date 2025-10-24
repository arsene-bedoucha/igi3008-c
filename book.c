#include <stdio.h>

struct Book
{
    char title[100];
    char author[50];
    long int isbn;
    double price;
};

struct Book book1 = {"Le Seigneur des anneaux", "J.R.R. Tolkien", 2266286269, 18.90};
struct Book book2 = {"Game Of Thrones, Le trône de fer", "George R.R. Martin", 2290208876, 22.0};

void printBook(struct Book *book1)
{
    printf("Book title : %s\n", book1->title);
    printf("Book author : %s\n", book1->author);
    printf("Book ISBN : %li\n", book1->isbn);
    printf("Book price : %.2f\n", book1->price);
}

void changePrice(struct Book *book, double percent)
{
    book->price *= 1-percent/100;
}

int main()
{
    printBook(&book1);
    printBook(&book2);
    printf("Baisse de prix ! \n");
    changePrice(&book2, 5);
    printBook(&book2);

    return 0;
}
