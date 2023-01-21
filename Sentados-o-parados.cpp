/*
Un músico de la ciudad va a dar un concierto para recabar fondos para la caridad. 
El concierto se realizará en un teatro, con un espacio perfectamente designado, 
en el que hay  filas de asientos con  asientos cada una. 
En cada asiento se puede sentar como máximo una persona (es decir, dos personas no pueden sentarse en un mismo asiento).
Pero hay un problema: los boletos para el concierto se han sobrevendido, por lo que algunas personas van a tener que estar paradas para ver el concierto.
Problema
El músico te ha pedido tu ayuda para que respondas la siguiente pregunta: 
Si todos los que compraron boleto vienen al concierto, ¿cuántas personas estarán sentadas y cuántas estarán paradas?
*/

#include <iostream>

using namespace std;

int main(){

  int r,s,b,tot=0,sent=0,parad=0;

  cin >> r >> s;
  cin >> b;

  tot = r * s;

  if(tot < b){
    sent = tot;
    parad = b - tot;
    cout << sent;
    cout << " ";
    cout << parad;
  }else{
    parad = 0;
    sent = b;
    cout << sent;
    cout << " ";
    cout << parad;
  }
  
  return 0;
}