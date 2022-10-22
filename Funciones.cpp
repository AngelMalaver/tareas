/*

Angel Malaver CI:30310383
Trabajo numero 1 de Programacion II FUNCIONES 

*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

int sumar(int a,int b);
int restar(int a,int b); 
int producto(int a,int b); 

float division(float a,float b);

int main(){
  
int x,y1,y2;

  do{ system("cls");
  
      printf(" Tarea #1 : Funciones.\n\n");
      
      printf("Menu:\n \n 1.sumar.\n 2.restar.\n 3.Producto.\n 4.Division.\n \n Seleccionar Funcion a utilizar :  ");
      
          scanf("%d",&x);
          
    }while(x>4 || x<1);

  switch(x){
    
  case 1: 
   
  {int a,b;
  
    printf("el numero que busca es: %d",sumar(b,a));  
  }break;
       
    case 2:
      
    {int a,b;
    
    printf("el numero que busca es: %d ",restar(a,b));
  }break;
    
  case 3:
      
  {int a,b;
  
    printf("el numero que busca es: %d ",producto(a,b));
  }break;
  
  case 4:
    
  {float a,b;
  
    printf("el numero que busca es: %0.2f ",division(a,b));
  }break;
  
      
    }while(getch());  
    
  return 0;
  
    } 
   
   
  int sumar(int a, int b){
  	
  int resultado;
  
      printf("Ingrese el primer numero: ");
      
        scanf("%d", &a);
        
      printf("Ingrese el segundo numero: ");
      
        scanf("%d", &b);  
        
    resultado=a+b;
    
    return resultado;
    
    }
    
  int restar(int a, int b){
  	
    int resultado;
    
      printf("Ingrese el primer numero: ");
      
        scanf("%d", &a);
        
      printf("Ingrese el segundo numero: ");
      
        scanf("%d", &b);
        
    resultado=a-b;
    
    return resultado;
    
    }
    
    int producto(int a, int b){
    	
    int resultado;
    
      printf("Ingrese el primer numero: ");
      
        scanf("%d", &a);
        
      printf("Ingrese el segundo numero: ");
      
        scanf("%d", &b);
        
    resultado=a*b;
    
    return resultado;
    
    }
    
    float division(float a, float b){
    	
    float resultado;
    
      printf("Ingrese Dividendo : ");
      
        scanf("%f", &a);
        
      printf("Ingres el divisor : ");
      
        scanf("%f", &b);
        
    resultado=a/b;
    
    return resultado;
    
     }