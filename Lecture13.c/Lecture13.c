#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define MAX 31

int main()
{
	////text copy
	////using argument (int argc, char* argv[]) on the main function
	//int ch;
	//FILE* fr;
	//FILE* fw;
	//const char* outputname = "output.txt";
	//unsigned long count = 0;
	//if (argc != 2)
	//{
	//	printf("Usage: %s filename\n", argv[0]);
	//	exit(EXIT_FAILURE);
	//}
	//if ((fr = fopen(argv[1], "r")) == NULL)
	//{
	//	printf("Can't open %s\n", argv[1]);
	//	exit(EXIT_FAILURE);
	//}
	//if ((fw = fopen(outputname, "w")) == NULL)
	//{
	//	printf("Can't open %s\n", outputname);
	//	exit(EXIT_FAILURE);
	//}
	//while ((ch = fgetc(fr)) != EOF)
	//{
	//	fputc(ch, stdout);
	//	fputc(ch, fw);
	//	count++;
	//}
	//fclose(fr);
	//fclose(fw);
	//printf("\nFILE %s has %lu characters\n", argv[1], count);
	//printf("Copied to %s", outputname);

	////UTF-8
	//const UINT default_cp = GetConsoleOutputCP();
	//printf("%u\n", default_cp);
	//int ch;
	//FILE* fr, * fw;
	//const char* in_filename = "원본.txt";
	//const char* out_filename = "사본.txt";
	//unsigned long count = 0;
	//if ((fr = fopen(in_filename, "a+")) == NULL)
	//{
	//	printf("Can't open %s\n", in_filename);
	//	exit(EXIT_FAILURE);
	//}
	//if ((fw = fopen(out_filename, "w")) == NULL)
	//{
	//	printf("Can't open %s\n", out_filename);
	//	exit(EXIT_FAILURE);
	//}
	//SetConsoleOutputCP(CP_UTF8);
	//while ((ch = fgetc(fr)) != EOF)
	//{
	//	fputc(ch, stdout);
	//	fputc(ch, fw);
	//	count++;
	//}
	//SetConsoleOutputCP(default_cp);
	//fclose(fr);
	//fclose(fw);
	//printf("\nFILE %s has %lu characters\n", in_filename, count);
	//printf("Copied to %s", out_filename);

	//FILE* fp;
	//char words[MAX] = { '\0', };
	//const char* filename = "record.txt";
	//if ((fp = fopen(filename, "a+")) == NULL)
	//{
	//	fprintf(stderr, "Can't open \"%s\" file.\n", filename);
	//	exit(EXIT_FAILURE);
	//}
	////while ((fscanf(stdin, "%30s", words) == 1) && (words[0] != '.'))
	////	fprintf(fp, "%s\n", words);
	//while ((fgets(words, MAX, stdin) != NULL) && (words[0] != '.'))
	//	fputs(words, fp);
	//rewind(fp);
	////while (fscanf(fp, "%s", words) != EOF)
	////	fprintf(stdout, "%s\n", words);
	//while (fgets(words, MAX, fp) != NULL)
	//	fputs(words, stdout);
	//if (fclose(fp) != 0)
	//	fprintf(stderr, "Error closing file\n");

	// Writing example
	//{
	//	FILE* fp = fopen("binary_file", "wb");
	//	double d = 1.0 / 3.0; 
	//	int n = 123;
	//	int* parr = (int*)malloc(sizeof(int) * n);
	//	if (!parr) exit(1);
	//	for (int i = 0; i < n; ++i)
	//		*(parr + i) = i * 2;
	//	fwrite(&d, sizeof(d),1, fp);
	//	fwrite(&n, sizeof(n),1, fp);
	//	fwrite(parr, sizeof(int), n, fp);
	//	fclose(fp);
	//	free(parr);
	//}
	//// Reading example, feof(), ferror()
	//{
	//	FILE* fp = fopen("binary_file", "rb");
	//	double d;
	//	int n=0;
	//	fread(&d, sizeof(d), 1, fp);
	//	fread(&n, sizeof(n), 1, fp);
	//	int* parr = (int*)malloc(sizeof(int) * n);
	//	if (!parr) exit(1);
	//	fread(parr, sizeof(int), n, fp);
	//	printf("feof = %d\n", feof(fp));
	//	printf("%f\n", d);
	//	printf("%d\n", n);
	//	for (int i = 0; i < n; ++i)
	//		printf("%d ", *(parr + i));
	//	printf("\n");
	//	printf("feof=%d\n", feof(fp));
	//	fread(&n, sizeof(n), 1, fp);
	//	printf("feof = %d\n", feof(fp));
	//	printf("ferror = %d\n", ferror(fp));
	//	fwrite(&n, sizeof(n), 1, fp);
	//	printf("ferror = %d\n", ferror(fp));
	//	fclose(fp);
	//	free(parr);
	//}

	//int ch;
	//long cur;
	//FILE* fp = fopen("test.txt", "r+");
	//cur = ftell(fp);
	//printf("ftell() = %ld\n", cur);
	//fseek(fp, 2L, SEEK_SET);
	//cur = ftell(fp);
	//printf("ftell() = %ld\n", cur);
	//ch = fgetc(fp);
	//printf("%d %c\n", ch, ch);
	//cur = ftell(fp);
	//printf("ftell() = %ld\n", cur);
	//fseek(fp, -2L, SEEK_CUR);
	//cur = ftell(fp);
	//printf("ftell() = %ld\n", cur);
	//ch = fgetc(fp);
	//printf("%d %c\n", ch, ch);
	//fseek(fp, 0L, SEEK_END);
	//ch = fgetc(fp);
	//printf("%d %c\n", ch, ch);
	//fseek(fp, -1L, SEEK_END);
	//ch = fgetc(fp);
	//printf("%d %c\n", ch, ch);
	//fseek(fp, -2L, SEEK_END);
	//ch = fgetc(fp);
	//printf("%d %c\n", ch, ch);

	//// using fsetpos(), fgetpos()
	//int ch;
	//FILE* fp = fopen("test.txt", "r+");
	//fpos_t pt;
	//pt = 10;
	//fsetpos(fp, &pt);
	//ch = fgetc(fp);
	//printf("%d %c\n", ch, ch);
	//fgetpos(fp, &pt);
	//printf("%lld\n", pt);

	////make a test binary file
	//{
	//	FILE* fp = fopen("binary", "wb");
	//	for (int i = 0; i < 100; ++i)
	//	{
	//		double d = i * 1.11;
	//		fwrite(&d, sizeof(double), 1, fp);
	//	}
	//	fclose(fp);
	//}
	//// open binary file
	//FILE* fp = fopen("binary", "rb");
	//long cur;
	//double d;
	//cur = ftell(fp);
	//printf("Before reading %ld\n", cur);
	//fread(&d, sizeof(double), 1, fp);
	//cur = ftell(fp);
	//printf("After reading %ld\n", cur);
	//printf("%f\n", d);
	//fread(&d, sizeof(double), 1, fp);
	//printf("%f\n", d);
	//cur = ftell(fp);
	//printf("After reading %ld\n", cur);
	//fseek(fp, 32L, SEEK_SET);
	//fread(&d, sizeof(double), 1, fp);
	//printf("%f\n", d);
	//fclose(fp);

	//FILE* fp;
	//int ch;
	//fp = fopen("input.txt", "r");
	//ch = fgetc(fp);
	//fputc(ch, stdout);
	//ungetc(ch, fp);		// insert ch in buffer
	//ch = fgetc(fp);
	//fputc(ch, stdout);
	//fclose(fp);
	//printf("\n");
	// setvbuf()
	//fp = fopen("input.txt", "r");
	//char buffer[32] = { '\0', };
	//setvbuf(fp, buffer, _IOFBF, sizeof(buffer));		// _IOLBF (LINE) , _IOFBF (FULL) , _IONBF (NO)
	//for (int i = 0; i < sizeof(buffer); ++i)
	//	printf("%hhd", buffer[i]);
	//printf("\n");
	//ch = fgetc(fp);
	//for (int i = 0; i < sizeof(buffer); ++i)
	//	printf("%c", buffer[i]);
	//printf("\n");
	//fclose(fp);

	//fflush(fp);	// writing a large amount of data (to output all buffer data)
	
	//FILE* fp = fopen("test2.txt", "rb");
	//unsigned char ch;
	//SetConsoleOutputCP(CP_UTF8);
	//while (fread(&ch, sizeof(unsigned char), 1, fp) > 0)
	//	printf("%hhu %c\n", ch, ch);
	//fclose(fp);

	return 0;
}