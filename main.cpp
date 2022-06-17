#include <iostream>
#include <iomanip>
using namespace std;

class Buku{
  public :
    void input();
    void proses();
    void output();

  private :
    int array[25];
    int array2[4][6];
    int y = 0;
};

void Buku::input(){
  cout<<"Masukkan data nomor buku : "<<endl;
  for(int i= 0; i<24; i++){
    cout<<"Data ["<<i+1<<"] = ";
    cin>>array[i];
  }
  cout<<"\nData nomor buku yang telah terdaftar : \n";
  for(int i=0; i<24; i++){
    cout<<array[i]<<", ";
  }
} 

void Buku::proses() {
  for (int i = 0; i < 24; i++) {
    for (int j = 0; j < 24; j++) {
      if (array[i] < array[j]) {
        int x = array[i];
        array[i] = array[j];
        array[j] = x;
      }
    }
  }
  cout << "\n\nData nomor buku yang telah diurutkan : \n" << endl;
  for (int i = 0; i < 24; i++) {
    cout << array[i] << ", ";
  }
}

void Buku::output() {
  cout << "\n\nHasil buku yang telah disusun di dalam rak" << endl;
  cout<<"\t\t\t"<<"------------------------------------------------------------------\n";
	cout<<"\t\t\t"<<"|  Buku 1 |  Buku 2 |  Buku 3  |   Buku 4  |  Buku 5  |  Buku 6  |\n";
	cout<<"----------------------------------------------------------------------------\n";
  for (int i = 0; i < 4; i++) {
     if (y == 24) {
      break;
    }
    cout<<"| Rak ke-"<<i+1<<" ";
    for (int j = 0; j < 6; j++) {
      array2[i][j] = array[y];
      cout<<"| "<<setiosflags(ios::left)<<setw(8)<<array2[i][j]<<"|";
      y++;
    }
    cout<<"\t\t\t"<<"\n----------------------------------------------------------------------------\n";
  }
}

int main() {
  Buku Andi;
  Andi.input();
  Andi.proses();
  Andi.output();
  return 0;
}
