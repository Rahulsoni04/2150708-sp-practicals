#include<stdio.h>
#include<conio.h>


int len1(char[]);
void copy1(char[],char[]);
void concat1(char[],char[]);
int comp1(char[],char[]);
void rev1(char[]);

void main() {
	char s1[20],s2[20],c1[20],c2[20],r[20];
	int c,d;
	clrscr();
	printf("Enter the string:");
	gets(s1);
	c = len1(s1);
	printf("\n Length is %d",c);
	printf("\n Enter second string:");
	gets(s2);
	copy1(s2,s1);
	printf("\n Copied string is %s",s2);
	printf("\n Enter string to concate:");
	gets(c1);
	concat1(s1,c1);
	printf("\n Enter two strings to compare:");
	gets(c2);
	gets(r);
	printf("\n Comparison:");
		if(comp1(c2,r) == 0)
			printf("\n Same");
		else
			printf("\n Different");

	printf("\n Reversed string: ");
	rev1(s1);
	getch();
}

int len1(char s1[]){
	int i;
	for(i=0;s1[i] != '\0'; i++);
	return i;
}

void copy1(char s2[],char s1[]){
	int i;
	for(i=0;s1[i]!='\0'; i++){
		s2[i] = s1[i];
	}
	s2[i] = '\0';
}

void concat1(char s1[],char c1[]){
	int i,j;
	for(i=len1(s1), j=0; c1[j]!='\0';i++,j++){
		s1[i] = c1[j];
	}
	s1[i] = '\0';
	printf("\n Concated string is %s",s1);
}

int comp1(char c2[], char r[]){
	int c = 0;
	while(c2[c] == r[c]){
		if(c2[c] == '\0'|| r[c] == '\0')
		break;
		c++;
	}
	if(c2[c] == '\0' && r[c] == '\0')
		return 0;
	else
		return -1;
}

void rev1(char s1[]){
	int i;
	for(i=len1(s1); i>=0; i--){
		printf("%c",s1[i]);
	}
}

/*
Output
Enter the string:Rahul

 Length is 5
 Enter second string:soni

 Copied string is Rahul
 Enter string to concate:soni

 Concated string is Rahulsoni
 Enter two strings to compare:hello
rahul

 Comparison:
 Different
 Reversed string: inosluhaR
 */
   





                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
