#include <iostream>
#include "arreglo.h"
#include "Computadora.h"
using namespace std;

int main()
{
    Arreglo<Computadora> computadoras;

    Computadora c01("Intel Core i9 10900k", "NVIDIA GeForce RTX 3090", 2000,32); 
    Computadora c02("AMD Ryzen 9 5950X", "AMD Radeon VII", 2000, 32);
    Computadora c03("AMD Threadripper 3990x","NVIDIA QUADRO RTX 8000", 8000, 128);

    computadoras << c01 << c02 << c03 << c03 << c03;
    Computadora c04("AMD Threadrippper 3970","NVIDIA QUADRO RTX 8000", 8000, 128);
    Computadora c05("AMD Threadripper 3990x","NVIDIA QUADRO RTX 8000", 8000, 128);

    cout << "..............................Metodo Buscar................................."<<endl;
    cout << endl;

    Computadora *ptr = computadoras.buscar(c04);

    if(ptr != nullptr){
        cout << *ptr << endl;
    }
    else
    {
       cout << "No existe" << endl;
       cout << endl;
    }

    Computadora *ptr1 = computadoras.buscar(c01);
    if(ptr1 != nullptr){
        cout << *ptr1 << endl;
    }
    else
    {
       cout << "No existe" << endl;
    }

    cout << endl;
    cout << "............................Metodo Buscar todo................................"<<endl;
    cout << endl;


    Arreglo<Computadora*> ptrs = computadoras.buscar_todos(c05);

    if(ptrs.size() > 0){
        for (size_t i = 0; i < ptrs.size(); i++)
        {
        Computadora *c = ptrs[i];
        cout << *c << endl;
        }
    }
    else{
        cout << "No existen coincidencias"<<endl;
    }

    //Arreglo<int> arreglo;

    //for(size_t i=0; i < 10; i++){
        //arreglo.insertar_final(i);
    //}

    //arreglo.insertar_final(1);
    //arreglo.insertar_final(8);
    //arreglo.insertar_inicio(6);
    //arreglo.insertar_inicio(2);

    //for(size_t i=0; i < arreglo.size(); i++){
       //cout << arreglo[i] << " ";
    //}
    //cout << endl;
    
    //arreglo.Insertar(5,2);

    //for(size_t i=0; i < arreglo.size(); i++){
        //cout << arreglo[i] << " ";
    //}
    //cout << endl;

    //arreglo.eliminar_final();
    //arreglo.eliminar_inicio();
    //arreglo.eliminar(1);

    //for(size_t i=0; i < arreglo.size(); i++){
        //cout << arreglo[i] << " ";
    //}
    //cout << endl;

    //int *v = arreglo.buscar(2);
    //*v = 20;
    //for(size_t i=0; i < arreglo.size(); i++){
        //cout << arreglo[i] << " ";
    //}
    //cout << v << " " <<*v<< endl;
    //cout << endl;

    return 0;
}