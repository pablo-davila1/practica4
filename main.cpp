#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <precio.h>

using namespace std;

int main()
{
    map<string , map<string,int> >exit; //mapa de mapas

    map<string,int>arrival; // mapa corriente

    arrival.insert(make_pair("B",4)); //insrto cosas al mapa corriente
    arrival.insert(make_pair("C",10));

    exit.insert(make_pair("A",arrival));// inserto cosas al mapa bacano

    arrival.clear();

    arrival.insert(make_pair("D",1)); //insrto cosas al mapa corriente
    arrival.insert(make_pair("A",4));

    exit.insert(make_pair("B",arrival));

    arrival.clear();

    arrival.insert(make_pair("B",1)); //insrto cosas al mapa corriente
    arrival.insert(make_pair("C",2));

    exit.insert(make_pair("D",arrival));

    arrival.clear();

    arrival.insert(make_pair("D",2)); //insrto cosas al mapa corriente
    arrival.insert(make_pair("A",10));

    exit.insert(make_pair("C",arrival));
    arrival.clear();

    //string next = "";
    string exit_rout = "A";
    string arrival_rout = "B";

    precio P(exit_rout,arrival_rout,exit);

    cout<<P.show_precioL(exit_rout,arrival_rout,exit)<<endl;
    cout<<P.show_precioR(exit_rout,arrival_rout,exit)<<endl;



    return 0;
}
