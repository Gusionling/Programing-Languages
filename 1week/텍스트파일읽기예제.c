#include <stdlib.h>

int c; //파일의 내용을 읽기 위해 선언
FILE *file = NULL; //*이 붙는건 포인터 (주소가 저장)
char file_Name[] = "my_file.txt";

file = fopen(file_Name, "r"); //fopen은 파일을 열어준다. r은 read. 데이터를 저장할 수 있는 모드로 파일의 스트림을 열게 된다.
if(file == NULL) //파일을 여는데 실패했다.
{
    printf("Failed to open file.\n");
    exit(1);
}

while( (c = getc(file))!=EOF) //getc는 get character
    putchar(c);
fclose(file); //file stream 닫기