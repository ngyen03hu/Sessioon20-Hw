#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char randomstring[]="hello word";
	// 1 mo file 
	 FILE *fptr;
	 
	 fptr = fopen("demo-ifjiofejdsnf.txt","w");
	// 2 tuong tac file (doc , ghi chinh sua file)
	if(fptr == NULL){
		printf("loio mo tap tin \n");
		return 1;
	}
	fputc(randomstring[0],fptr);
	fputc(randomstring[1],fptr);
	fputc(randomstring[2],fptr);
	
	
	//dong file
	fclose(fptr);
	printf("da tien hanh ghi song ky tu vao file\n");
	
	// mo file 
	fptr = fopen("demo-ifjiofejdsnf.txt","r");// doc no ra 
	// doc du lieu trong file (doc ky tu)
	int c = fgetc(fptr);
	
	printf("%c\n", c);
	
	int c2 = fgetc(fptr);
	printf("%c\n", c2);
	
	int c3 = fgetc(fptr);
	printf("%c\n", c3);
	
	int c4 = fgetc(fptr);
	printf("%c\n", c4);
	// dong file 
	fclose(fptr);
    return 0; 
}


