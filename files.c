#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void create_file();
void copy_file();
void copy_without_spaces();
void merge_files();

int main ()
{
	
	int x;
	printf("chose what you want to do : \n 1.create Files\n 2.Copy  file \n 3.copy with out spaces \n 4.merge files \n 5.quit\n");
	scanf ("%d",&x);
	switch (x)
        {
            case 1:
                create_file();
                break;
            case 2:
                copy_file();
                break;
            case 3:
                copy_without_spaces();
                break;
            case 4:
                merge_files();
                break;
            case 5:
            	return 0;
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }
	
void create_file(){
	FILE *f,*f2;
   char c;
   f = fopen("algo1.txt","w");
   f2 = fopen("algo2.txt","w");
   
    
   if(f == NULL || f2 == NULL){ 
   printf("Could  not open");
   
   
   
   fclose(f);
   fclose(f2);
   printf("files were created");
   
   return ;
   }
	
}
void copy_file(){
FILE *f,*f2;
   char c;
   f = fopen("algo1.txt","r");
    f2 = fopen("algo2.txt","w");
    
   if(f == NULL || f2 == NULL){ 
   printf("file did not open");
   
   }
  while((c = fgetc(f)) != EOF){
 
   	fputc(c,f2);
   }
  printf("file copied");
  
   fclose(f);
   fclose(f2);
   return;
}
void copy_without_spaces(){
		FILE *f,*f2;
   char c;
   f = fopen("algo1.txt","r");
    f2 = fopen("algo2.txt","w");
    
   if(f == NULL || f2 == NULL){ 
   printf("file did not open");
   
   }
  while((c = fgetc(f)) != EOF){
  	if(isspace(c) <= 0)
   	fputc(c,f2);
   }
  printf("file copied without space");
  
   fclose(f);
   fclose(f2);
   return;
}
void merge_files(){
FILE *f,*f2,*f3;
   char c;
   f = fopen("algo1.txt","r");
   f2 = fopen("algo2.txt","r");
   f3 = fopen("algo3.txt","w");
    
   if(f == NULL || f2 == NULL || f3 == NULL){ 
   printf("Could  not open");
   return ;
   }
 
  while((c = fgetc(f)) != EOF){
  	
   	fputc(c,f3);
   }
   while((c = fgetc(f2)) != EOF){
  
   	fputc(c,f3);
   }
 
   printf("Merged algo1.txt and algo2.txt into algo3.txt");
   
   fclose(f);
   fclose(f2);
   fclose(f3);
	return ;
}
	
	
 
   
   


