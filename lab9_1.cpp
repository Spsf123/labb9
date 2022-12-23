#include <iostream>
#include <string>
using namespace std;

int main()
{
  char rank;
  string a = "You have received Super Ultra Rare Unit!!!\n";
  string b = "You have received 5 gems.\n";
  string c = "You have received 1 gems.\n";
  string d = "You have received 2000 coins.\n";
  string e = "You have received very KAK items.\n";
  cout << "Input your rank: ";
  cin >> rank;
  if(rank == 'S'){
    cout << a << b << c << d << e;
  }else if(rank == 'A'){
    cout  << b << c << d << e;
  }else if(rank == 'B'){
    cout << c << d << e;
  }else if(rank == 'C'){
    cout << d << e;
  }else if(rank == 'D'){
    cout << e;
  }
}
