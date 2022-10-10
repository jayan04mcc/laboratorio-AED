#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct nodo
{
    int valor;
    nodo *next;
};
nodo *primero,*ultimo,*actual,*nuevo;

void insertar_final(int x){
    nuevo=new nodo;
    nuevo->valor=x;
    nuevo->next=nullptr;
    if(primero==nullptr){
        primero=nuevo;
        ultimo=nuevo;
    }
    else{
        ultimo->next=nuevo;
        ultimo=nuevo;
    }

}
void retirar_final(){
    if(primero==nullptr){
        "no hay nada que retirar";
    }
    else{
        if(primero==ultimo){
            primero=nullptr;
            ultimo=nullptr;
        }
        else{
                nodo *previo;
            actual=primero;
            while(actual->next!=nullptr){
                previo=actual;
                actual=actual->next;
            }
            previo->next=nullptr;
            ultimo=previo;
        }
    }
}
void retirar_inicio(){

if(primero==nullptr){
    cout<<"la lista esta vacia"<<endl;
}
else{
    actual=primero;
    primero=primero->next;
    actual=nullptr;
}
}
void mostrar_lista(){
    int count=0;
    if(primero==nullptr){
            cout<<"LA COLA ESTA VACIA"<<endl;
    }
    else{
    actual=primero;
    while(actual!=nullptr){
        cout<<"nro de ingreso :"<<count<<"=="<<actual->valor<<endl;
        actual=actual->next;
        count++;
    }
    }

}
int main(){

insertar_final(11);
insertar_final(12);
insertar_final(13);
insertar_final(14);
mostrar_lista();
cout<<"retiramos el inicio nodo"<<endl;
retirar_inicio();
mostrar_lista();
return 0;
}
