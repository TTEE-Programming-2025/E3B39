#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PASSWORD "2024"
int main() {
    char input[5]; 
    printf("請輸入四位數字密碼：");
    scanf("%s", input); 
	if (strcmp(input, PASSWORD) == 0) {
        printf("密碼正確，歡迎進入！\n");
    }
