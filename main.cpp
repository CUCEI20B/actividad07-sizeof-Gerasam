#include <iostream>


using namespace std;

int main() {
    string cad;
    do
    {
        cout<<"\n\nIngrese 'salir' para cerrar el progarma\n";
        cout<<"Ingrese tipo de dato: ";
        getline(cin,cad);

        if (cad=="int")
        {
            cout<<"Bytes: "<<sizeof(int);
        }
        else if (cad=="float")
        {
            cout<<"Bytes: "<<sizeof(float);
        }
        else if (cad=="char")
        {
            cout<<"Bytes: "<<sizeof(char);
        }
        else if (cad=="short")
        {
            cout<<"Bytes: "<<sizeof(short);
        }
        else if (cad=="double")
        {
            cout<<"Bytes: "<<sizeof(double);
        }
        else if (cad=="long")
        {
            cout<<"Bytes: "<<sizeof(long);
        }
    } while (cad!="salir");
    

    return 0;
}