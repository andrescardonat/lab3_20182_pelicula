#include <QCoreApplication>
#include <iostream>
using namespace std;






int main()
{




        double porc = 0;
        int ganador = 0, suma = 0,band = 0,voto = 0,i = 1, j=0;
        int pelicula[3];


        for (i=0; i<3; i++){
            pelicula[i]=0;
        }

        while (band==0){

            cout<<"pelicula 1: La monja"<<endl;
            cout<<"pelicula 2: El depredador"<<endl;
            cout<<"pelicula 3: La mujer maravilla"<<endl;
            cout<<"para terminar presione 0"<<endl;
            cout<<"ingrese el numero de la pelicula que corresponde para votar: "<<endl;
            cin>>voto;
            if (voto==0){
                      band=1;
            }else{
                switch (voto){
                    case 1:
                        pelicula[0] = pelicula[0]+1;
                        break;
                    case 2:
                        pelicula[1] = pelicula[1]+1;
                        break;
                    case 3:
                        pelicula[2] = pelicula[2]+1;
                        break;

                    default:
                        cout<<"La pelicula "<<j<<" tuvo un total de "<<pelicula[i]<<" votos."<<endl;
                }
            }
        }
        for (i=0; i<3; i++){
            j=i+1;
            cout<<"la pelicula "<<j<<" tuvo un total de "<<pelicula[i]<<" votos."<<endl;
            suma=suma+pelicula[i];
        }
        band=0;
        for (i=0; i=3; i++){
            if (band==0){
                band=1;
                ganador=i;
            }else {
                if (pelicula[i]>pelicula[ganador]){
                    ganador=i;
                }
            }
        }
        porc=pelicula[ganador];
        porc=porc/suma *100;
        cout<<"la pelicula ganadora es: "<<ganador+1<<endl;
        cout<<"la pelicula tuvo en total "<<pelicula[ganador]<<endl;
        cout<<"De estos votos el porcentaje del total es "<<porc<<endl;

};
