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
	       	printf("\n Voc� � uma BEB�!");
		   }
	
	else {
	       if( age <= 12) {
	       	printf("\n Voc� � uma CRIAN�A!");
		   }
	       	
	else {
	       if( age <= 18) {
	       	printf("\n Voc� � um ADOLESCENTE!");
		   }
	       	
	else {
	       if( age <= 29) {
	       	printf("\n Voc� � um JOVEM!");
		   }
	       	
	else {
	       if( age <= 59) {
	       	printf("\n Voc� � um ADULTO!");
		   }
	       	
	else {
	       if( age <= 110) {
	       	printf("\n Voc� � um IDOSO!");
		   }
	       	
	else {
	       	printf("\n Voc� � j� MATUSAL�M!");
	       	
		   
		  }  
	     }
        }
       }
      }
     }
    }   
	
	return 0;
		
}

