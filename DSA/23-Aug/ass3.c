#include <stdio.h>
struct Book
{
    char title[20], author[20], subject[20], book_id[20];
} b;

void input()
{
    printf("Enter book title: ");
    gets(b.title);
    printf("Enter author: ");
    gets(b.author);
    printf("Enter subject: ");
    gets(b.subject);
    printf("Enter book ID: ");
    gets(b.book_id);
}

void output()
{
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Subject: %s\n", b.subject);
    printf("Book ID: %s\n", b.book_id);
}

int main()
{
    input();
    output();
    return 0;
}