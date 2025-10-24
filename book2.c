#include <stdio.h>

void setBookFields(Book* book, char* title, char* author, long int isbn, double price){
    book->title = title;
    book->author = author;
    book->isbn = isbn;
    book->price = price;
}

int main()
{
    Books books;
    setBookFields(&books[0], "Le Seigneur des anneaux", "J.R.R. Tolkien", 2266286269, 18.90);
    setBookFields(&books[1], "Game Of Thrones, Le trône de fer", "George R.R. Martin", 2290208876, 22.0);
    setBookFields(&books[2], "Le Nom de la rose", "Umberto Eco", 2253033138, 8.90);

    return 0;
}

void printBooks(Books *books, int n){
    for (int i=0; i<n; i++){
        printBook(*books+i);
        printf("\n");
    }
}