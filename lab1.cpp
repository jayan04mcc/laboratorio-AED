#include <iostream>
using namespace std;
template<class T>
class Nodo
{
   public:
     T    m_Dato;
     T    grado;
     Nodo * m_pSig;
   public:
     Nodo(T d,T g)
     {
        m_Dato = d;
        grado = g;
        m_pSig =0;
     }
};


template<class T>
class Lista
{
   private:
     Nodo<T> * m_pHead;
   public:
      Lista()
      {
        m_pHead =0;
      }

      ~Lista()
      {

      }
      void Add(T d,T g)
      {
        Nodo<T>  * pNew = new Nodo<T>(d,g);
        if(!m_pHead)
          m_pHead = pNew;
        else
        {
            pNew->m_pSig = m_pHead;
            m_pHead = pNew;
        }


      }
      void ordenar(T d,T g){
           Nodo<T>  * pNew = new Nodo<T>(d,g);
          Nodo<T> * pTmp = m_pHead;
          Nodo<T> * apTmp = m_pHead;
         while(apTmp!=nullptr){
              while(pTmp!=nullptr)
                    {

                        if(pTmp->m_pSig->grado < pNew->grado ){
                                pNew->m_pSig=pTmp->m_pSig;

                                pTmp->m_pSig=pNew;
                        }
                    }
                apTmp=apTmp->m_pSig;



        }
      }

      void print()
      {
         Nodo<T> * pTmp = m_pHead;
         while(pTmp)
         {
            cout<<pTmp->m_Dato<<"-"<<pTmp->grado<<"..";
            pTmp = pTmp->m_pSig;

         }
      }

};
int main()
{

  Lista<int> A;
  A.Add(24,8);
  A.Add(4,5);
  A.Add(64,2);
  A.Add(14,7);
  A.Add(44,6);
  A.ordenar(3,2);
   A.print();


  return 1;
}
