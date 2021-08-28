#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define SLEN 101

struct book
{
	char name[SLEN];
	char author[SLEN];
};

void print_books(const struct book* books, int n);
void write_books(const char* filename, const struct book* books, int n);
struct book* read_books(const char* filename, int* n);
void read_books2(const char* filename, struct book** books_ptr, int* n);
//void init_buf(char* buffer);


int main()
{
	int temp;
	int n = 3;

	struct book* my_books = (struct book*)malloc(sizeof(struct book) * n);
	if (!my_books) 
	{
		printf("Malloc failed");
		exit(1);
	}

	my_books[0] = (struct book){ "The Great Gatsby", "F.Scott" };
	my_books[1] = (struct book){ "Hamlet", "Shakespeare" };
	my_books[2] = (struct book){ "The Odyssey", "Homer" };
	
	print_books(my_books, 3);

	printf("\nWriting to a file.\n");
	write_books("books.txt", my_books, n);
	n = 0;
	printf("Done.\n");
	printf("\nPress any key to read data from the file.\n\n");
	temp = _getch();

	my_books = read_books("books.txt", &n);
	printf("%d\n", n);
	print_books(my_books, n);
	free(my_books);
	n = 0;

	return 0;
}

void print_books(const struct book* books, int n)
{
	for (int i = 0; i < n; ++i)
		printf("Book %d : \"%s\" written by \"%s\"\n", i + 1, (books + i)->name, (books + i)->author);
}

void write_books(const char* filename, const struct book* books, int n)
{
	FILE* fp = fopen(filename, "w+");
	fprintf(fp, "%d\n", n);
	for (int i = 0; i < n; i++)
		fprintf(fp, "%s\n%s\n", (books + i)->name, (books+i)->author);
	fclose(fp);
}

struct book* read_books(const char* filename, int* n)
{
	FILE* fp = fopen(filename, "r");
	fscanf(fp, "%d%*c", n);
	char ch;
	struct book* ret_val = (struct book*)calloc(sizeof(struct book),*n);
	for (int i = 0; i < *n; ++i)
	{
		fscanf(fp, "%[^\n]%*c%[^\n]%*c", ret_val[i].name, ret_val[i].author);
	}
	fclose(fp);
	return ret_val;
}

void read_books2(const char* filename, struct book** books_ptr, int* n)
{

}

//void init_buf(char* buffer)
//{
//	for (int i = 0; i < SLEN; ++i)
//		buffer[i] = '\0';
//}

//for (int i = 0; i < *n; ++i)
//{
//	while ((ch = fgets(buffer, SLEN, fp)) != '\0')
//		strcpy((ret_val + i)->name, buffer);
//	while ((ch = fgets(buffer, SLEN, fp)) != '\0')
//		strcpy((ret_val + i)->author, buffer);
//}

