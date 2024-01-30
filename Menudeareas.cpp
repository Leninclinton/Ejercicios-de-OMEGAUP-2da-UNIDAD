#include <iostream>
using namespace std;

int main(){

    int numero;

    do{
        cout<<endl;
        cout<<"*************************************"<<endl;
        cout<<"______PENSAMIENTO COMPUTACIONAL______"<<endl;
        cout<<"Ing. Miguel Romilio Aceituno Rojo"<<endl;
        cout<<"*************************************"<<endl;

        cout<<"CALCULANDO AREAS Y VOLUMENES"<<endl;
        cout<<"1. AREAS"<<endl;
        cout<<"2. VOLUMENES"<<endl;
        cout<<"3. SALIR"<<endl;
        cout<<"*************************************"<<endl;
        cout<<"Digite una opcion entre 1-3: "<<endl;
        cin>>numero;

        switch(numero){
            case 1:
                int nroA;
                cout<<"********************"<<endl;
                cout<<endl;
                cout<<"CALCULANDO AREAS"<<endl;
                cout<<"1. CUADRADO"<<endl;
                cout<<"2. TRIANGULO"<<endl;
                cout<<"3. CIRCULO"<<endl;
                cout<<"4. RECTANGULO"<<endl;
                cout<<"5. ROMBO"<<endl;
                cout<<"6. TRAPECIO"<<endl;
                cout<<"7. PARALELOGRAMO"<<endl;
                cout<<"8. SECTOR CIRCULAR"<<endl;
                cout<<"9. ANILLO"<<endl;
                cout<<"10. ELIPSE"<<endl;
                cout<<endl;
                cout<<"Digite una opcion: "<<endl;
                cin>>nroA;

                switch(nroA){
                    case 1:
                        float lado;
                        float area_cuadrado;
                        cout<<"*********************************"<<endl;
                        cout<<"Calculando el AREA del CUADRADO"<<endl;
                        cout<<"Ingrese el lado del CUADRADO: "<<endl;
                        cin>>lado;
                        area_cuadrado = lado*lado;
                        cout<<endl;
                        cout<<"El AREA del CUADRADO es: "<<area_cuadrado<<" m2trs"<<endl;
                        break;

                    case 2:
                        float altura;
                        float base;
                        float area_triangulo;
                        cout<<"***********************************"<<endl;
                        cout<<"Calculando el AREA del TRIANGULO"<<endl;
                        cout<<"Ingrese la BASE del TRIANGULO: "<<endl;
                        cin>>base;
                        cout<<"Ingrese la ALTURA del TRIANGULO: "<<endl;
                        cin>>altura;
                        area_triangulo = 0.5*altura*base;
                        cout<<endl;
                        cout<<"El AREA del TRIANGULO es: "<<area_triangulo<<" m2trs"<<endl;
                        break;

                    case 3:
                        float radio_circulo;
                        float area_circulo;
                        cout<<"************************************************"<<endl;
                        cout<<"Calculando el AREA del CIRCULO o CIRCUNFERENCIA"<<endl;
                        cout<<"Ingrese el RADIO del CIRCULO: "<<endl;
                        cin>>radio_circulo;
                        area_circulo = 3.1416*radio_circulo*radio_circulo;
                        cout<<endl;
                        cout<<"El AREA del CIRCULO es: "<<area_circulo<< " m2trs."<<endl;
                        break;

                    case 4:
                        float base_rectangulo, altura_rectangulo;
                        float area_rectangulo;
                        cout<<"***********************************"<<endl;
                        cout<<"Calculando el AREA del RECTANGULO"<<endl;
                        cout<<"Ingrese la BASE del RECTANGULO: "<<endl;
                        cin>>base_rectangulo;
                        cout<<"Ingrese la ALTURA del RECTANGULO: "<<endl;
                        cin>>altura_rectangulo;
                        area_rectangulo = base_rectangulo*altura_rectangulo;
                        cout<<endl;
                        cout<<"El AREA del RECTANGULO es: "<<area_rectangulo<<" m2trs."<<endl;
                        break;

                    case 5:
                        float diagonal_m, diagonal_M;
                        float area_rombo;
                        cout<<"*****************************"<<endl;
                        cout<<"Calculando el AREA del ROMBO"<<endl;
                        cout<<"Ingrese la DIAGONAL MENOR del ROMBO: "<<endl;
                        cin>>diagonal_m;
                        cout<<"Ingrese la DIAGONAL MAYOR del ROMBO: "<<endl;
                        cin>>diagonal_M;
                        area_rombo = diagonal_m*diagonal_M*0.5;
                        cout<<endl;
                        cout<<"El AREA del ROMBO es: "<<area_rombo<<" m2trs."<<endl;
                        break;

                    case 6:
                        float altura_trap, base_menor, base_mayor;
                        float area_trapecio;
                        cout<<"*********
