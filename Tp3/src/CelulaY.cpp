#include "CelulaY.h"

CelulaY::CelulaY(float x,float y,bool adn,bool unicelular,float inflamacion, int id):Celula(x,y,adn,unicelular,inflamacion, id){

}

void CelulaY::mostrar(){

    cout<<"Celula tipo Y"<<endl;
    Celula::mostrar();
}

CelulaY::~CelulaY(){
    //dtor
}
