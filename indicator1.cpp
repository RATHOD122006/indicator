#include<stdio.h>
 
 int len(char *str){
 int len = 0;
 while(*str){
 	len++;
 	str++;
 }
 return len;
 	
 }
 
 int main(){
 	char input[128];
 	
 	printf("enter a name : \n");
 	gets(input);
 	
 	printf("length of the string : %d\n",len(input));
 	return 0;
 }