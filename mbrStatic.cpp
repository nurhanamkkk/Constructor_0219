#include <iostream>
using namespace std;

class mahasiswa
{
public :
     static int nim;
     int id;
     string nama;

     void setID();

     void printAll();

     mahasiswa(string pnama)
     {
        nama = pnama;
        setID();
     }

};

int mahasiswa::nim = 219;

void mahasiswa::setID()
{
    id = ++nim;
}

Void mahasiswa::printAll()
{
    cout << "ID  = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main ()
{
    mahasiswa mhs1("Aldys Ferry");
    mahasiswa mhs2("Stefany Angelina");
    mahasiswa mhs3("Ibel Moriarty");
    mahasiswa mhs4("Giselle Aespa");

    mhs1.printAll();
    
    mhs2.PrintAll();
    mhs3.printAll();
    mhs4.printAll();
    return 0;
}