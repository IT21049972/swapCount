#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int swap(char str1[], char str2[]){
	
	int count=0;
	int i=0;
	
	if(strlen (str1) != strlen(str2)){
		return -1;
	}
	
	while(i< strlen(str1)){
		if(str1[i] != str2[i]){
			if(i+1<strlen (str1) && str1[i] == str2[i+1] && str1[i+1] == str2[i]){
				count=count+1;
				i=i+2;
				
			}else{
				return -1;
			}
		}else{
			i++;
		}
	}
	
	return count;
}

int main() {
	
	char a[10];
	char b[10];

	

	printf("Value of a: ");
	fgets(a, sizeof(a), stdin);



printf("Value of b: ");
fgets(b, sizeof(b), stdin);

printf("--------------------------------\n");
printf(" Number of swaps is %d",swap(a,b));

return 0;


}
