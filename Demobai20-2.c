#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char randomstring[]="hello world !";
	int length = (int)strlen(randomstring);
	// ghi toan bo ky tu co trong chuoi randomstring vao trong file
	// 1 mo file
	FILE *fptr;
	
	fptr = fopen("demo-fuptut-fgetc.txt","w");
		// 2 ghi vao file
	if(fptr == NULL){
		printf("loi mo file.........!\n");
		return 1;
	}
	for(int i = 0; i<length ;i++){
		fputc(randomstring[i],fptr);
	}
 
	// 3 dong file 
	fclose(fptr);
	printf("da gi du lieu thanh cong\n");
	// doc toan bi ky tu dang dc luu tru trong file
	// MO FILE (de doc)
		fptr = fopen("demo-fuptut-fgetc.txt","r");

	// DOC KY TU o TRONG FILE
	if(fptr == NULL){
		printf("file khong    ton tai \n");
		return 1;
	}
	
	int c;
	while(c != EOF){
		c = fgetc(fptr);
		printf("%c\n",c);
	}
	// dong  file
	fclose(fptr);
	printf("doc ky tu file thanh cong\n");
    return 0;
}


