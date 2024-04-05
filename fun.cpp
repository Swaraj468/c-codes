/*#include<bits/stdc++.h>
using namespace std;
int fun(int p, int t, int r){
  int si = (p*t*r)/100;
return si;
    
}

int main(){
    int p,t,r;
   
    
    cin>>p>>t>>r;
     int si = fun(p,t,r);
    
    cout<<si<<endl;
    return 0;

}
*/


/*#include <bits/stdc++.h>
using namespace std;

double perimeter(double radius) {
    return 2 * M_PI * radius;
}

double perimeter(double length, double width) {
    return 2 * (length + width);
}

double perimeter(double side1, double side2, double side3) {
    return side1 + side2 + side3;
}

int main() {
    double radius, length, width, side1, side2, side3;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Perimeter of the circle is: " << perimeter(radius) << endl;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Perimeter of the rectangle is: " << perimeter(length, width) << endl;

    cout << "Enter the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    cout << "Perimeter of the triangle is: " << perimeter(side1, side2, side3) << endl;

    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

bool isEven(int a){
   return !(a%2);
}

int main(){
  bool a = isEven(10);
  cout<<a;
  return 0;
}