#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PASSWORD "2024"
int main() {
    char input[5]; 
    printf("�п�J�|��Ʀr�K�X�G");
    scanf("%s", input); 
	if (strcmp(input, PASSWORD) == 0) {
        printf("�K�X���T�A�w��i�J�I\n");
    }
