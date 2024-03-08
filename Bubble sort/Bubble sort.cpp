
#include <iostream>
#include <string>
using namespace std;

int arr[20]; //Deklarasi variable global array a dengan ukuran 20
int n; // Deklarasi variable global n untuk menyimoan banyaknya elemen array

void input() { //procedur untuk input

    while (true) {
        cout << "Masukan banyaknya elemen pada array : "; //output ke layar
        cin >> n; //input dari pengguna
        if (n <= 20) // jika n kurang dari atau sama dengan 20
            break; // keluar dari loop
        else {     // Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 eleman.\n";// output ke layar

        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++) { //Looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ":"; // Output ke layar
        cin >> arr[i]; // Output dari pengguna

    }
}

void bubblesortArray() { //Procedur untuk mengurutkan array dengan metode bubble sort
    int pass = 1; //step 1

    do {
        for (int j = 0; j <= n - 1 - pass; j++) { //step 2
            if (arr[j] > arr[j + 1]) { //step 3
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass = pass + 1; //step 4

        cout << "\nPass" << pass - 1 << ":'"; // number of pass
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " "; // Menampilkan data pada number of pass

        }
        cout << endl;
    } while (pass <= n - 1); // step 5


}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j]; // Menampilkan array
        if (j < n - 1) {
            cout << " -->";
        }
    }
    cout << endl;
    cout << endl;

    cout << "Jumlah pass = " << n - 1 << endl; // Menampilkan jumlah dari pass
    cout << endl;
    cout << endl;

}

int main()
{
    input();

    bubblesortArray();
    display();

    system("pause");
    return 0;
}

