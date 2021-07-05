#include <iostream>
 
using namespace std;
 
class Box
{
   public:
      double chieudai;
      void setChieuRong( double wid );
      double layChieuRong( void );
 
   private:
      double chieurong;
};
 
// phan dinh nghia cac ham thanh vien
double Box::layChieuRong(void)
{
    return chieurong ;
}
 
void Box::setChieuRong( double rong )
{
    chieurong = rong;
}
 
// ham main cua chuong trinh
int main( )
{
   Box box;
 
   // thiet lap chieu dai cua Box, khong su dung ham thanh vien
   
   box.chieudai = 50.2; // Dieu nay la OK: boi vi chieudai la public
   
   cout << "Chieu dai cua Box la: " << box.chieudai <<endl;
 
   // thiet lap chieu rong cua Box, khong su dung ham thanh vien
   
   // box.chieurong = 22.4; // Tao ra mot Error: boi vi chieurong la private
   
   box.setChieuRong(22.4);  // Ban su dung ham thanh vien de thiet lap chieurong.
   
   cout << "Chieu rong cua Box la: " << box.layChieuRong() <<endl;
 
   return 0;
}