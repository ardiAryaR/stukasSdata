#include <iostream>
#define maks 5
using namespace std;

struct Gitar {
    string namaGitar[5];
    int harga[5];
    int top;

    Gitar() : top(0) {}
};

struct Piano {
    string namaPiano[5];
    int harga[5];
    int top;

    Piano() : top(0) {}
};

struct Drum {
    string namaDrum[5];
    int harga[5];
    int top;

    Drum() : top(0) {}
};

class Toko {
private:
    Gitar gtr;
    Piano pn;
    Drum Dr;

public:
    bool gitarpenuh() { 
		return gtr.top >= maks; 
	}
    bool gitarkosong() { 
		return gtr.top == 0; 
	}

    void pushGitar() {
        if (!gitarpenuh()) {
            cout << "Masukkan nama: ";
            cin >> gtr.namaGitar[gtr.top];
            cout << "Masukkan harga: ";
            cin >> gtr.harga[gtr.top];
            gtr.top++;
        }
    }

    void popGitar() {
        if (!gitarkosong()) {
		 	gtr.top--; 
		 }
    }

    void dataGitar() {
        if (!gitarkosong()) {
            cout << "Data tersimpan: " << endl;
            for (int i = 0; i < gtr.top; i++) {
                cout << i + 1 << ". " << gtr.namaGitar[i] << " - Rp." << gtr.harga[i] << endl;
            }
        } else {
            cout << "Data kosong\n";
        }
    }

    bool pianopenuh() { 
		return pn.top >= maks; 
	}
    bool pianokosong() { 
		return pn.top == 0; 
	}

    void pushPiano() {
        if (!pianopenuh()) {
            cout << "Masukkan nama: ";
            cin >> pn.namaPiano[pn.top];
            cout << "Masukkan harga: ";
            cin >> pn.harga[pn.top];
            pn.top++;
        }
    }

    void popPiano() {
        if (!pianokosong()) { 
			pn.top--; 
		}
    }

    void dataPiano() {
        if (!pianokosong()) {
            cout << "Data tersimpan: " << endl;
            for (int i = 0; i < pn.top; i++) {
                cout << i + 1 << ". " << pn.namaPiano[i] << " - Rp." << pn.harga[i] << endl;
            }
        } else {
            cout << "Data kosong\n";
        }
    }

    bool drumpenuh() { 
		return Dr.top >= maks; 
	}
    bool drumkosong() {
		return Dr.top == 0; 
	}

    void pushDrum() {
        if (!drumpenuh()) {
            cout << "Masukkan nama: ";
            cin >> Dr.namaDrum[Dr.top];
            cout << "Masukkan harga: ";
            cin >> Dr.harga[Dr.top];
            Dr.top++;
        }
    }

    void popDrum() {
        if (!drumkosong()) { 
			Dr.top--; 
		}
    }

    void dataDrum() {
        if (!drumkosong()) {
            cout << "Data tersimpan: " << endl;
            for (int i = 0; i < Dr.top; i++) {
                cout << i + 1 << ". " << Dr.namaDrum[i] << " - Rp." << Dr.harga[i] << endl;
            }
        } else {
            cout << "Data kosong\n";
        }
    }
};

void display() {
    Toko tk;
    int pilihan;
    int pilihan2;
    do {
        cout << "=======================================+" << endl;
        cout << "|     Toko Sewa dan Jual Alat Musik    |" << endl;
        cout << "|1. menyewa                            |" << endl;
        cout << "|2. menambah sewa                      |" << endl;
        cout << "|3. menambah stok barang               |" << endl;
        cout << "|4. menghapus/menjual barang           |" << endl;
        cout << "|5. Keluar                             |" << endl;
        cout << "|======================================+" << endl;
        cout << "|Masukkan pilihan: ";
        cin >> pilihan;
        switch (pilihan) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            cout << "|1. Tambah Gitar                       |" << endl;
            cout << "|2. Tambah Piano                       |" << endl;
            cout << "|3. Tambah Drum                        |" << endl;
            cout << "|4. keluar                             |" << endl;
            cin >> pilihan2;
            if (pilihan2 == 1) {
                tk.pushGitar();
                tk.dataGitar();
            } else if (pilihan2 == 2) {
                tk.pushPiano();
                tk.dataPiano();
            } else if (pilihan2 == 3) {
                tk.pushDrum();
                tk.dataDrum();
            } else {
                cout << "pilihan tidak ada" << endl;
            }
            break;
        case 4:
            int pil;
            cout << "|1. Hapus Gitar                        |" << endl;
            cout << "|2. Hapus Piano                        |" << endl;
            cout << "|3. Hapus Drum                         |" << endl;
            cout << "|4. keluar                             |" << endl;
            cin >> pil;
            if (pil == 1) {
                tk.popGitar();
                tk.dataGitar();
            } else if (pil == 2) {
                tk.popPiano();
                tk.dataPiano();
            } else if (pil == 3) {
                tk.popDrum();
                tk.dataDrum();
            } else {
                cout << "pilihan tidak ada" << endl;
            }
            break;
        }
    } while (pilihan != 5);
}

int main() {
    Toko t;
    display();
    return 0;
}
















