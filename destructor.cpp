#include <iostream>
using namespace std;

class angka
{
private: 
      int *arr;
      int panjang;
public: 
     angka(int); //Cunstructor
     ~angka(); //Destructor
     void cetakData();
     void isiData();
};
// Definisi member function
angka::angka (int 1) { // Constuctor
       panajang = 1;
       arr = new int{1};
       isiData();
    angka::~angka(){
        cout << endl;
        CetakData();
        delete{}arr;
        cout << "Alamat Array sudah di lepaskan" << endl;
    }
}
 void angka::cetakData(){
    for (int i=1; i<=panjang; i++){
        cout << 1 <<  "= ";
        cin >> arr {i};
    }
    cout << endl;
 }

 int main()
 {
    angka belajarcpp(3); //Constructor Dipanggil
    angka *ptrbelajarcpp = new angka (5); //Constructor Dipanggil
    delete ptrbelajarcpp; // Destructor Dipanggil

    return 0;
 } //Destructor Dipanggil