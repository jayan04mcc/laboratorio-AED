#include <iostream>
using namespace std;

struct nodo{
int dato;
nodo *next;
};
nodo *primero,*ultimo,*actual,*nuevo;

insertar_inicio(int x){
nuevo=new nodo;
nuevo->dato=x;
nuevo->next=nullptr;
if(primero==nullptr){
    primero=nuevo;
    ultimo=nuevo;
}
else{
    nuevo->next=ultimo;
    ultimo=nuevo;
}
}
void eliminar_primero(){
if(ultimo==nullptr){
    cout<<"lista vacia"<<endl;
}
else{
    if(ultimo==primero){
        ultimo=nullptr;
        primero=nullptr;

    }
    else{
        nodo *aux;
        actual=ultimo;
        while(actual->next!=nullptr){
                aux=actual;
                actual=actual->next;
        }
        aux->next=nullptr;
        primero=aux;
    }
}
}
void mostrar_pila(){
int count=0;
actual=ultimo;
while(actual!=nullptr){
    cout<<"pos :"<<count<<" == "<<actual->dato<<endl;
    actual=actual->next;
    count++;
}

}

int main()
{
    insertar_inicio(1);
    insertar_inicio(2);
    insertar_inicio(3);
    insertar_inicio(4);
    mostrar_pila();
    cout<<"eliminar primero"<<endl;
    eliminar_primero();
    mostrar_pila();
    return 0;
}
