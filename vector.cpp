#include <iostream>
#include <vector>
using namespace std;

int main() {


  vector<int> vector1 = {};
  vector1.push_back(1);
  vector1.push_back(5);
  vector1.push_back(7);
  vector1.push_back(8);
  vector1.push_back(10);
  vector1.push_back(11);
  vector1.push_back(13);
  vector1.push_back(16);
  vector1.push_back(17);
  

 // vector<int> vector2{6, 7, 8, 9, 10};

  //vector<int> vector3(5, 12);

  cout << "vector1 = ";
 int size=vector1.size();
 int capacity=vector1.capacity();
 cout<<"capacity"<<capacity<<endl;
  cout<<"size:"<<size <<endl;

  for ( int i : vector1) {
    cout << i << "  ";
  }

//   cout << "\nvector2 = ";

//   for ( int i : vector2) {
//     cout << i << "  ";
//   }
  
  

//   cout << "\nvector3 = ";

  
//   for (int i : vector3) {
//     cout << i << "  ";
//   }

  return 0;
}