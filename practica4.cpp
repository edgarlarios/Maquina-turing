#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <string>
#define strg 100
using namespace std;

map<int,char> cinta;

int i=0,num=0;
char cadena[strg]="";
char caracter; 
bool resultado=true;

char write(char c){
     return cinta[i]= c;
}

char read(){     
     return cinta[i];
     }

bool move(char a, char b, int d){
    resultado = false;
    
    cout<<b;
         
     if(read()==a){  
          write(b); 
          if(d==1){
               i++;          
          }
          if(d==0){
               i--;           
          }       
          resultado= true;          
     }
     else{
          resultado= false;          
     }     
 return resultado;
}

     
void componenteA(char a){          
    
          resultado = move(read(), a, 1);                   
         resultado = move(read(), a, 0);  
}

void componenteR(){     
 i++; 
// resultado = move(read(), read(), 1);  
}
     
void componenteL(){
 i--;
// resultado= move (read(), write(caracter), 0);
}

char mtComp(){                                
    if(read()== '\0'){ 
        componenteR();                
   }  
   
   while(read() != '\0'){
      // cout<<i<<endl;
       //cout<<read();
      // cout<<"regresa al while"<<endl;
       if(read()== '1'){
           caracter= '0';                         
           componenteA(caracter); 
            componenteR(); 
            
       }
       else{
            caracter= '1';                        
            componenteA(caracter);
              componenteR();
       }   
      
      }                 
}

void componenteB(){     
     componenteR();     
     }
             
void mtInc(){  
     
   if(read()== '\0'){ //aki va la makina B
        componenteL();                
   }            
    //componenteA();                           
}


void leerCadena(){
     
     if((read()=='\0')){ //aki va la makina B
        i++;                     
     }
     
     while(read()!= '\0'){
         cout<<read();
         i++;
         }      
     cout<<endl;
}

void insertandoCadena( char *z){           
            while(z[i] != '\0'){
              write(z[i]);  
               i++;                               
            }           
            i=0;           
}   

void M(){
     
    insertandoCadena(cadena);   
    cout<<"complemento a unos: ";   
   
    mtComp();
    
    cout<<" .";  
 /*   cout<<endl;
   
    num=1;    
    i--;   
    
    while(read() != '\0'){
                 
        if((read() == '0') && (num==1)){                
                   mtInc();                 
        }
        if((read()== '1') && (num==1)){                       
                 mtInc(); 
        }                     
        if((read()== '1') || (read() == '0') && (num==2)){                           
                 mtInc();
        }                  
    }  
    cout<<endl;
    i++;
                                           
    cout<<"complemento a 12's"<<endl;
    
    leerCadena();
    if(resultado == true){
    cout<<"la operacion de transicion tuvo exito"<<endl;
    cout<<endl;
    }*/
}   

int main(){
   
    cout<<"ingrese una cadena: ";
    cin>>cadena;
    cout<<endl;           
    M();                  
    system("PAUSE");  
}
