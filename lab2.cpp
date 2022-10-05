#include <iostream>
#include <stack>
#include <ctype.h>
using namespace std;
struct node{
string op;
node * sig;
 node(string operador)
     {
        op=operador;
     }
};
class stack_{

private:
    node *top;
    node *top2;
    node *top3;
public:
    stack_()
      {
        top=0;
        top2=0;
        top3=0;
      }

      ~stack_()
      {

      }
       void push3(string ss){
          node *new_nodo=new node(ss);
          if(!top3)
          top3= new_nodo;
        else
        {
            new_nodo->sig =top3;
            top3 = new_nodo;
        }
      
      
      }
     
      void push2(string ss){
          node *new_nodo=new node(ss);
          if(!top2)
          top2= new_nodo;
        else
        {
            new_nodo->sig =top2;
            top2 = new_nodo;
        }
      
      
      }
     
      void push_(string op){
          
          string caracter;
            for (int i = 0; i <7; i++)
             {
                caracter=op[i];
                node *aux=new node(caracter);
                
                if(!top)
                top = aux;
                else
                {
                    aux->sig =top;
                    top= aux;
                }
                    //stack<char> encolar;
                    
                    //encolar.push(aux->op);
            }


      }
      string borrar(string dat){
          node *aux3=top3;
          
          if(aux3->op="(" || aux3->op=")" ){
            delete aux3;
            aux3=aux3->sig;
          }
          
      
      }
      char pop__(){
         if(!top){
            cout<<"no existe"<<endl;
         }
         node * aux2=top;
         while(aux2){
                if(isalpha(aux2->op)){
                    aux2->sig=top2;
        
                }
                if(aux2->op!="+" || aux2->op!="-" ){
                    if(aux2->op!="*" || aux2->op!="/" ){
                        aux2->sig=top3;
                    }
                        
                }
                if(aux2->op=="(" || aux2->op=="(" ){
                    
                }
                
            aux2=aux2->sig;
         } 
            

      }
      bool isEmpty(){
      }




};
 string postfix(string){


}

int main()
{
    stack_ A;
    string prueba ="A+(B*C)";
    A.push_(prueba);
    return 0;
}
