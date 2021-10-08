#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	
	int age;
	
	printf("Digite a sua idade: ");
	scanf("%i", &age);
	
	if( age <= 0)
	{ 
	    printf("\n*****ERRO***** ");
	}
	
	else {
	       if( age <= 2) {
	       	printf("\n Você é uma BEBÊ!");
		   }
	
	else {
	       if( age <= 12) {
	       	printf("\n Você é uma CRIANÇA!");
		   }
	       	
	else {
	       if( age <= 18) {
	       	printf("\n Você é um ADOLESCENTE!");
		   }
	       	
	else {
	       if( age <= 29) {
	       	printf("\n Você é um JOVEM!");
		   }
	       	
	else {
	       if( age <= 59) {
	       	printf("\n Você é um ADULTO!");
		   }
	       	
	else {
	       if( age <= 110) {
	       	printf("\n Você é um IDOSO!");
		   }
	       	
	else {
	       	printf("\n Você é já MATUSALÉM!");
	       	
		   
		  }  
	     }
        }
       }
      }
     }
    }   
	
	return 0;
		
}

