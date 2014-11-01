#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
using namespace std;


//agrega el elemento valor (dado) a mi_set (dado)
void agregarASet(set<int>* mi_set,int valor)
{
    mi_set->insert(valor); //  usamos el insert  para agregar un nuevo elemento
}

//devuelve true si valor (dado) existe en mi_set (dado)
bool existe(set<int> mi_set,int valor)
{
    for(set<int>::iterator it = mi_set.begin(); it!= mi_set.end(); it++) // hacemos  un iterador para recorrer todo el set
    {
        if(*it == valor) // miramos  si el valor existe dentro del set
        {
            return true; // devuelve  verdadero  si se encuentra el valor
        }
    }
    return false; // si el valor no se encuentra el valor retorna falso
}

//devuelve la cantidad de elementos de mi_set (dado)
int tamano(set<int> mi_set)
{
    return mi_set.size();  //  usamos el size para saber la cantidad de elementos que tiene mi_set
}

//devuelve la interseccion de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga unicamente los valores que mi_set1 y mi_set2 tengan en comun)
set<int> getInserseccion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3; // creamos la variable  donde se guardaran los valores
    for(set<int>:: iterator it= mi_set1.begin(); it!= mi_set1.end(); it++) // verificamos  el primer set a traves de un iterator
    {
        for(set<int>:: iterator it2= mi_set2.begin(); it2 != mi_set2.end(); it2++) // verificamos  el segundo set de la misma manera que el primero
            {
            if(*it == *it2) // revisamos  que el valor del primer set sea igual que el segundo (interseccion)
            {
                mi_set3.insert(*it); // insertamos el valor que sea similiar (interseccion)
            }
        }
    }
    return mi_set3; // devolvemos los valores insertados en el set

}

//devuelve la union de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga todos los valores de mi_set1 y mi_set2)
set<int> getUnion(set<int> mi_set1, set<int> mi_set2)
{
     set<int> mi_set3; // variable donde se guardaran los valores
    for(set<int>:: iterator it= mi_set1.begin(); it!= mi_set1.end(); it++) // recorremos el primer set a traves de iterator
    {
        for(set<int>:: iterator it2 = mi_set2.begin(); it2!= mi_set2.end(); it2++) //recorremos el segundo de la misma manera
        {
            mi_set3.insert(*it); // insertamos los valores del set 1
            mi_set3.insert(*it2); // insertamos los valores del set 2
        }
    }
    return mi_set3;  // devuelve los valores insertados

}

//devuelve true si mi_sub_set (dado) es un subconjunto de mi_set (dado)
//(mi_set contiene todos los valores de mi_sub_set)
bool esSubConjunto(set<int> mi_set, set<int> mi_sub_set)
{
   set<int> set3; // variable para guardar los puntos de interseccion

    for(set<int>::iterator it = mi_set.begin(); it!= mi_set.end(); it++) // recorremos el set principal
    {
        for(set<int>::iterator it2 = mi_sub_set.begin(); it2!= mi_sub_set.end(); it2++) // recorremos el segundo set o el set que tiene los subconjuntos
        {
            if(*it==*it2) //  proceso para determinar intersecciones
            {
                set3.insert(*it); // insertamos las intersecciones dentro de una variable

            }

        }
    }
    if(set3==mi_sub_set) // si las interseccion dan igual al valor de los subconjuntos
    {
        return true; // mi_sub_set es subconjunto y devuelve true
    }

    return false; // de lo contrario devuelve false
}



int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
