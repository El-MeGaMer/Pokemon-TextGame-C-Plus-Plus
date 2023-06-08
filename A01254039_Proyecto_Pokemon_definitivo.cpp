//Javier Eduardo Hurtado Rodriguez
//A01254039
//29/11/2021
//TC1033
#include <fstream>  // for files management
#include <iostream> // for I/O and keyboard input/output
#include <string>   // for managing strings
#include <cstdlib>  // for exit()
#include <sstream>  // for stringstream for tokenizing
using namespace std;

class Pokemon
{
private:
    string nombre;
    string tipo;
    int puntos_de_vida;
    int fuerza;
    string descripcion;
    string frasePelea;

public:
    void set_Nombre(string name) { nombre = name; }
    void set_Tipo(string tipe) { tipo = tipe; }
    void set_PuntosDeVida(int pv) { puntos_de_vida = pv; }
    void set_Descripcion(string desc) { descripcion = desc; }
    void set_Fuerza(int strength) { fuerza = strength; }
    void set_frasePelea(string fP) { frasePelea = fP; }

    string get_Nombre() { return nombre; }
    string get_Tipo() { return tipo; }
    int get_PuntosDeVida() { return puntos_de_vida; }
    int get_Fuerza() { return fuerza; }
    string get_frasePelea() { return frasePelea; }

    void hacer_dano(int dano)
    {
        int efectividad, resistencia;
        puntos_de_vida = puntos_de_vida - dano;
        cout << nombre << " fue golpeado por " << dano << " Puntos de vida" << endl;
        efectividad = dano * 2;
        resistencia = dano / 2;
    }
};
void showPokemon(Pokemon arrP[], int elementos)
{
    for (int i = 0; i < elementos; i++)
    {
        cout << arrP[i].get_Nombre() << endl;
    }
}

void combate(Pokemon arrP[], int elementos)
{
    int attack, num1, num2;
    string p1, p2;
    cout << "Has elegido un combate" << endl;
    cout << "Pokemon 1: ";
    cin >> p1;
    if (p1 == "Pikachu")
    {
        cout << arrP[0].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 0;
    }
    else if (p1 == "Squirtle")
    {
        cout << arrP[1].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 1;
    }
    else if (p1 == "Charmander")
    {
        cout << arrP[2].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 2;
    }
    else if (p1 == "Bulbasaur")
    {
        cout << arrP[3].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 3;
    }
    else if (p1 == "Caterpie")
    {
        cout << arrP[4].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 4;
    }
    else if (p1 == "Pidgey")
    {
        cout << arrP[5].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 5;
    }
    else if (p1 == "Rattata")
    {
        cout << arrP[6].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 6;
    }
    else if (p1 == "Geodude")
    {
        cout << arrP[7].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 7;
    }
    else if (p1 == "Cyndaquil")
    {
        cout << arrP[8].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 8;
    }
    else if (p1 == "Totodile")
    {
        cout << arrP[9].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 9;
    }
    else if (p1 == "Chikorita")
    {
        cout << arrP[10].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 10;
    }
    else if (p1 == "Sentret")
    {
        cout << arrP[11].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 11;
    }
    else if (p1 == "Hoothoot")
    {
        cout << arrP[12].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 12;
    }
    else if (p1 == "Ledyba")
    {
        cout << arrP[13].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 13;
    }
    else if (p1 == "Pichu")
    {
        cout << arrP[14].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 14;
    }
    else if (p1 == "Bonsly")
    {
        cout << arrP[15].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 15;
    }
    else if (p1 == "Treecko")
    {
        cout << arrP[16].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 16;
    }
    else if (p1 == "Torchic")
    {
        cout << arrP[17].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 17;
    }
    else if (p1 == "Mudkip")
    {
        cout << arrP[18].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 18;
    }
    else if (p1 == "Zigzagoon")
    {
        cout << arrP[19].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 19;
    }
    else if (p1 == "Wurmple")
    {
        cout << arrP[20].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 20;
    }
    else if (p1 == "Taillow")
    {
        cout << arrP[21].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 21;
    }
    else if (p1 == "Plusle & Minun")
    {
        cout << arrP[22].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 22;
    }
    else if (p1 == "Aron")
    {
        cout << arrP[23].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 23;
    }
    else if (p1 == "Chimchar")
    {
        cout << arrP[24].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 24;
    }
    else if (p1 == "Piplup")
    {
        cout << arrP[25].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 25;
    }
    else if (p1 == "Turtwig")
    {
        cout << arrP[26].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 26;
    }
    else if (p1 == "Starly")
    {
        cout << arrP[27].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 27;
    }
    else if (p1 == "Bidoof")
    {
        cout << arrP[28].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 28;
    }
    else if (p1 == "Kricketot")
    {
        cout << arrP[29].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 29;
    }
    else if (p1 == "Pachisuru")
    {
        cout << arrP[30].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 30;
    }
    else if (p1 == "Roggenrola")
    {
        cout << arrP[31].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num1 = 31;
    }

    cout << "Pokemon 2: ";
    cin >> p2;
    if (p2 == "Pikachu")
    {
        cout << arrP[0].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 0;
    }
    else if (p2 == "Squirtle")
    {
        cout << arrP[1].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 1;
    }
    else if (p2 == "Charmander")
    {
        cout << arrP[2].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 2;
    }
    else if (p2 == "Bulbasaur")
    {
        cout << arrP[3].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 3;
    }
    else if (p2 == "Caterpie")
    {
        cout << arrP[4].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 4;
    }
    else if (p2 == "Pidgey")
    {
        cout << arrP[5].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 5;
    }
    else if (p2 == "Rattata")
    {
        cout << arrP[6].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 6;
    }
    else if (p2 == "Geodude")
    {
        cout << arrP[7].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 7;
    }
    else if (p2 == "Cyndaquil")
    {
        cout << arrP[8].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 8;
    }
    else if (p2 == "Totodile")
    {
        cout << arrP[9].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 9;
    }
    else if (p2 == "Chikorita")
    {
        cout << arrP[10].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 10;
    }
    else if (p2 == "Sentret")
    {
        cout << arrP[11].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 11;
    }
    else if (p2 == "Hoothoot")
    {
        cout << arrP[12].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 12;
    }
    else if (p2 == "Ledyba")
    {
        cout << arrP[13].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 13;
    }
    else if (p2 == "Pichu")
    {
        cout << arrP[14].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 14;
    }
    else if (p2 == "Bonsly")
    {
        cout << arrP[15].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 15;
    }
    else if (p2 == "Treecko")
    {
        cout << arrP[16].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 16;
    }
    else if (p2 == "Torchic")
    {
        cout << arrP[17].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 17;
    }
    else if (p2 == "Mudkip")
    {
        cout << arrP[18].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 18;
    }
    else if (p2 == "Zigzagoon")
    {
        cout << arrP[19].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 19;
    }
    else if (p2 == "Wurmple")
    {
        cout << arrP[20].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 20;
    }
    else if (p2 == "Taillow")
    {
        cout << arrP[21].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 21;
    }
    else if (p2 == "Plusle & Minun")
    {
        cout << arrP[22].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 22;
    }
    else if (p2 == "Aron")
    {
        cout << arrP[23].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 23;
    }
    else if (p2 == "Chimchar")
    {
        cout << arrP[24].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 24;
    }
    else if (p2 == "Piplup")
    {
        cout << arrP[25].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 25;
    }
    else if (p2 == "Turtwig")
    {
        cout << arrP[26].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 26;
    }
    else if (p2 == "Starly")
    {
        cout << arrP[27].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 27;
    }
    else if (p2 == "Bidoof")
    {
        cout << arrP[28].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 28;
    }
    else if (p2 == "Kricketot")
    {
        cout << arrP[29].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 29;
    }
    else if (p2 == "Pachisuru")
    {
        cout << arrP[30].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 30;
    }
    else if (p2 == "Roggenrola")
    {
        cout << arrP[31].get_frasePelea() << endl;
        cin.clear();
        cin.sync();
        num2 = 31;
    }
    cout << arrP[2].get_frasePelea() << endl;
    cout << "Inicia Combate: " << endl;
    for (int con = 0; con < 3; con++)
    {
        attack = arrP[num1].get_Fuerza();
        arrP[num2].hacer_dano(attack); //pikachu al charmander
        attack = arrP[num2].get_Fuerza();
        arrP[num1].hacer_dano(attack); //charmander al pikachu
    }
    cout << "Puntos de vida: " << endl;
    cout << arrP[num1].get_Nombre() << " " << arrP[0].get_PuntosDeVida() << endl;
    cout << arrP[num2].get_Nombre() << " " << arrP[2].get_PuntosDeVida() << endl;
}

int main()
{
    Pokemon arrPokemon[32];
    Pokemon unPokemon;
    int i = 0;
    string strInput;
    string nombre, tipo, puntos_de_vida, fuerza, descripcion, frasePelea;
    stringstream ss;

    ifstream inf("17_1_30_Pokemon_Inventario.csv");
    if (!inf)
    {
        cerr << "Uh oh, Sample.csv could not be opened for reading!" << endl;
        exit(1);
    }
    getline(inf, strInput); //EXCLUYE LA PRIMERA LINEA
    while (inf)
    {
        if (inf.eof())
            break;
        getline(inf, strInput);
        stringstream ss(strInput);
        getline(ss, nombre, ',');
        getline(ss, tipo, ',');
        getline(ss, puntos_de_vida, ',');
        getline(ss, fuerza, ',');
        getline(ss, descripcion, ',');
        getline(ss, frasePelea, '.');

        unPokemon.set_Nombre(nombre);
        unPokemon.set_Tipo(tipo);
        unPokemon.set_PuntosDeVida(stoi(puntos_de_vida));
        unPokemon.set_Fuerza(stoi(fuerza));
        unPokemon.set_Descripcion(descripcion);
        unPokemon.set_frasePelea(frasePelea);

        arrPokemon[i] = unPokemon;
        i++;
        cout<<arrPokemon<<endl;
        /* cout << "Nombre :" << nombre << endl;
    cout << "Tipo :" << matricula << endl;
    cout << "Puntos de vida :" << equipo << endl;
    cout << "Fuerza :" << matricula << endl;
    cout << "Descripcion :" << equipo << endl;
    cout << "Frase Pelea :" << matricula << endl;*/

    } //final While
    inf.close();
    string opcion;
    while (true)
    {
        cout << "¿Que quieres hacer?" << endl;
        cout << "[Combate]  [Estatus]   [Salir]" << endl;
        cin >> opcion;
        if (opcion == "Combate")
        {
            combate(arrPokemon, i);
        }
        else if (opcion == "Salir")
        {
            exit(0);
        }
    }
    showPokemon(arrPokemon, i);

    return 0;
}
