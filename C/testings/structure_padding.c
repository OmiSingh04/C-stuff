#include <stdio.h>

// Alignment requirements
// (typical 32 bit machine)

// char     1 byte
// short int  2 bytes
// int     4 bytes
// double    8 bytes

// structure A
typedef struct structa_tag
{
char    c;// 1 byte
short int  s; // 2 byte
} structa_t;

// structure B
typedef struct structb_tag
{
short int  s; // 2byte
char    c;// 1 byte
int     i; //4 byte
} structb_t;

// structure C
typedef struct structc_tag
{
char    c; //1
double   d; //8
int 	 s; //4
} structc_t;

// structure D
typedef struct structd_tag
{
double   d;
int 	 s;
char    c;
} structd_t;

int main()
{
printf("sizeof(structa_t) = %lu\n", sizeof(structa_t));
printf("sizeof(structb_t) = %lu\n", sizeof(structb_t));
printf("sizeof(structc_t) = %lu\n", sizeof(structc_t));
printf("sizeof(structd_t) = %lu\n", sizeof(structd_t));

return 0;
}
