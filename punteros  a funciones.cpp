int* suma1(int*a,int*b){
int *c;
*c=*a+*b;
return c;
}
int* suma2(int*x,int*y){
int *v;
*v=*x+*y;
return v;

}
int *resultado_sumas(int*suma1(),int*suma2()){
    int a,b;
    a=7;
    b=5;
int *res=suma1(&a,&b);
res=*suma1+ *suma2;

return res;


}
int resta(int a,int b){
return a-b;

}
int multiplicacion(int a,int b){

}

int main(){
//int (*(*pf)(int*,int*));
//int (*pf2)(int,int);
int (*(*p_sum1)(int*,int*));
int (*(*p_sum2)(int*,int*));
int a=3,b=4;
int c=6,d=5;
p_sum1=suma1;
p_sum2=suma2;
cout<<(*(resultado_sumas)((*(p_sum1)(&a,&b)),(*(p_sum2)(&c,&d))));
//pf=suma;
//pf2=resta;
//cout<<(*(pf)(&a,&b))<<endl;
//cout<<(pf2)(c,d);

return 0;
}
