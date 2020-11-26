#include <stdio.h>
#include <stdlib.h>

#include "keywords.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int is_whitespace(char c){
	
	if(	c == ' ' ||
		c == '\n' ||
		c == '\r' ||
		c == '\t' ||
		c == '(')
		return 1;
		
	return 0;
}

int fget_word(FILE *fp, char *word){
	char c;
	int cnt;
	
	while((c = fgetc(fp) ) != EOF){
		if(is_whitespace(c) == 0)
			break;
	}

	if(c == EOF)
		return 0;
	

	cnt = 0;
	word[cnt++] = c;
	word[cnt] = '\0';	
	
	while( (word[cnt]=fgetc(fp)) != EOF ){
		
		if(is_whitespace(word[cnt]) == 1)
		{
			word[cnt] = '\0';
			break;
		}
		cnt++;
	}
	return cnt;
}

int main( ) {
	//분석 대상 파일 열기( );
	FILE *fp;
	char filename[100];
	char word[100];
	int cnt;
	
	printf("input the file name: ");
	scanf("%s", filename);
	
	if ((fp = fopen(filename, "r")) == NULL)
	{
		printf("input filename is invalid (%s)\n", filename);
		return -1;
	}
	
	while(fget_word(fp, word) != 0){
		count_word(word);
	}
	print_word();

	return 0;
	
	

	//분석 결과 출력( );
}
