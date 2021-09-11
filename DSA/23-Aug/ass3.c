//3. Wap to display 5 book details(title, author,subject, book_id) using structure.
#include <stdio.h>
struct Book
{
    char title[20], author[20], subject[20], book_id[20];
};

void input(Book *b)
{
    printf("Enter book title: ");
    gets(b->title);
    printf("Enter author: ");
    gets(b->author);
    printf("Enter subject: ");
    gets(b->subject);
    printf("Enter book ID: ");
    gets(b->book_id);
}

void output(Book *b)
{
    printf("Title: %s\n", b->title);
    printf("Author: %s\n", b->author);
    printf("Subject: %s\n", b->subject);
    printf("Book ID: %s\n", b->book_id);
}

int main()
{
    Book b[5];
    for (int i = 0; i < 5; i++)
    {
        printf("For book %d:\n", i + 1);
        input(&b[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nBook %d:\n", i + 1);
        output(&b[i]);
    }
    return 0;
}