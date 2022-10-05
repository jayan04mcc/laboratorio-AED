#include <iostream>
#include <String>
using namespace std;
struct nodo{
nodo *sig=nullptr;
nodo *ant=nullptr;
int dato;

};

class lista_circular{
private:
    nodo * head=nullptr;
    nodo * end_=nullptr;
public:
    lista_circular(){
        head=new nodo;//inicializamos
        head->sig=head;
        head->ant=head;
        end_=head;
    }
    void insertar_inicio(int data);
    void insertar_final(int data);
    void imprimir();

};
void lista_circular::insertar_inicio(int data){
        auto new_nodo= new nodo();
        new_nodo->sig=head;
        new_nodo->ant=end_;
        new_nodo->dato=data;

        head->ant=new_nodo;
        end_->sig=new_nodo;
        head=new_nodo;
        //return head;

}
void lista_circular::insertar_final(int data){
        auto new_nodo= new nodo();
        new_nodo->sig=head;
        new_nodo->ant=end_;
        new_nodo->dato=data;

        head->ant=new_nodo;
        end_->sig=new_nodo;
        end_=end_->sig;
        //return head;

}
void lista_circular::imprimir(){
    nodo *aux=head->sig;
    while(aux!=end_){
        cout<<aux->dato<<"->";
        aux=aux->sig;
    }
    cout<<aux->dato<<"->";
}
int main(){

lista_circular prueba;
prueba.insertar_final(1);
prueba.insertar_final(2);
prueba.insertar_final(3);
prueba.insertar_final(4);
prueba.imprimir();


}
