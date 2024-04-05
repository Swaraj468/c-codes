#include<bits/stdc++.h>
using namespace std;

class phone
{
    private:
 int ram;
 int rom;
 string name;

 public:
 void setram(int r) {
      ram = r;
    }
     int getram() {
      return ram;
    }
    void setrom(int o) {
      rom = o;
    }
     int getrom() {
      return rom;
    }
};
class oppo{
 private:

 int size;
 int camera;

 public:

    void setsize(int i) {
      size = i;
    }
    int getsize(){
        return size;
    }

   void setcamera(int a){
        camera = a;
   }
      int getcamera(){
       return camera;
      }
};
 class onePlus
    {
    private:
        int battery;
        int screen;

    public:
        void setbattery( int b)
        {
            battery = b;
    
        }

        int getbattery()
        {
            return battery;
        }
        void setscreen( int e){
            screen = e;
        }
       
     int getscreen()    {
            return screen;
        }
    };
int main(){
phone myObj;
  myObj.setram(16);
  myObj.setrom(128);
  cout << "ram is "<<myObj.getram()<<endl;
  cout<<"rom is "<<myObj.getrom()<<endl;
  oppo abc;
  abc.setsize(16);
  abc.setcamera(100);
  cout<<"size is "<<abc.getsize()<<endl;
  cout << "camera is "<< abc.getcamera()<<endl;
  onePlus mn;
  mn.setbattery(4500);
  mn.setscreen(10);
  cout<<"battery is "<<mn.getbattery()<<endl;
  cout<<"screen is "<<mn.getscreen()<<endl;
  return 0;
}