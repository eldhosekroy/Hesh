#include<stdio.h>
int main(int argc,char **argv){
FILE *file;
file=fopen(argv[1],"r");
int ch,s=0;
do {
	        ch = fgetc(file);
        if(ch>31&&ch<79){
                      ch=ch+47;
                                      }
        else if(ch>78&&ch<127){
                      ch=ch-47;
         }
s+=ch;		 
				            } while (ch != EOF);
fclose(file);
printf("%d\n",s);
}

