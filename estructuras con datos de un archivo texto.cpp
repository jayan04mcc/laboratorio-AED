#include <iostream>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
struct nodo{
char nombre[21],apellido[21];
nodo *next;
};
nodo *primero,*ultimo,*actual,*nuevo;

void cargar_archivo(){
    char nombre_[21],apellido_[21];
    ifstream arch;
    arch.open("E:/CURSOS 2 AÑO/2 SEMESTRE/lab alg y estructura/prueba.txt",ios::in);
    while(!arch.eof()){
        arch>>nombre_>>apellido_;
        if(!arch.eof()){
                nuevo=new nodo;
                strcpy(nuevo->nombre,nombre_);
                strcpy(nuevo->apellido,apellido_);
                if(primero==nullptr){
                    primero=nuevo;
                    primero->next=nullptr;
                    ultimo=primero;
                }
                else{
                    ultimo->next=nuevo;
                    nuevo->next=nullptr;
                    ultimo=nuevo;
                }
        }
    }
    arch.close();
}
void lista(){
    actual=primero;
    while(actual!=nullptr){
    cout<<"nombre "<<actual->nombre<<" apellido "<<actual->apellido<<endl;
    actual=actual->next;
    }

    cout<<"presione enter para continuar..."<<endl;


}
int main()
{
    cargar_archivo();
    lista();

    return 0;
}
