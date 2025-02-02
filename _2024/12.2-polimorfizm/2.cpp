#include <iostream>
using namespace std;

class Hayvan {
public:
    Hayvan() {
        cout << "Hayvan cstor fonksiyonu" << endl;
    }
    virtual void sesCikar() { // Normal fonksiyon
        cout << "Hayvan bir ses çıkarıyor." << endl;
    }
    ~Hayvan() {
        cout << "Hayvan dstor fonksiyonu" << endl;
    } // Sanal yıkıcı
};

class Kopek : public Hayvan {
public:
    Kopek() {
        cout << "Kopek cstor fonksiyonu" << endl;
    }
    void sesCikar(){
        cout << "Hav hav!" << endl;
    }
    ~Kopek() {
        cout << "Kopek dstor fonksiyonu" << endl;
    }
};

class Kedi : public Hayvan {
public:
    Kedi() {
        cout << "Kedi cstor fonksiyonu" << endl;
    }
    void sesCikar(){
        cout << "Miyav!" << endl;
    }
    ~Kedi() {
        cout << "Kedi dstor fonksiyonu" << endl;
    }
};



int main() {
    Hayvan* kopek = new Kopek();
    Hayvan* kedi = new Kedi();
    
    kopek->sesCikar(); // Hav hav!
    kedi->sesCikar(); // Miyav!
    
    delete kopek;
    delete kedi;
    return 0;
}

/*
Eğer bir taban sınıfın yıkıcısı virtual olarak tanımlanmazsa 
ve taban sınıf işaretçisi türetilmiş bir sınıf nesnesini işaret ediyorsa, 
    yıkıcı zinciri düzgün çalışmaz. 
    Bu, bellek sızıntılarına yol açabilir.
    bir sonraki kodu inceleyelim
*/
