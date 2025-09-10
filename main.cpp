// # include <iostream>
// using namespace std;
//
// //Problem 1:
// int main() {
//     int intNumber = 24;
//     float floatNumber = 3.14;
//     double doubleNumber = 45.1234;
//     bool boolean = true;
//     char charNumber = 'A';
//     cout << "Value of integer is "<< intNumber << ", Size is " << sizeof(intNumber) << endl;
//     cout << "Value of float is " << floatNumber << ", Size is " << sizeof(floatNumber) << endl;
//     cout << "Value of double is " << doubleNumber << ", Size is " << sizeof(doubleNumber) << endl;
//     cout << "Value of bool is " << boolean << ", Size is " << sizeof(boolean) << endl;
//     cout << "Value of char is " << charNumber << ", Size is " << sizeof(boolean) << endl;
//     return 0;
// }
//
//
// //Problem 2:
//
// int main()
// {
//   string name = "Alijon Aliev";
//     int id = 233242;
//     string song = "Queen - The Show Must Go On";
//     string movie = "Titanic";
//     cout << name << endl;
//     cout << id << endl;
//     cout << song << endl;
//     cout << movie << endl;
//     return 0;
// }
//
//
// //Problem 3:
//
// int main()
// {
//  cout << "\t \"I\'m standing\" on the edge of some crazy cliff." << "\n";
//     cout << "\t What I have to do\," << "I have to catch everybody\\" << "\n";
//     cout << "\t if they start to go over the cliff\-" << "I mean\\" << "\n";
//     cout << "\t \\if they’re running and they don\'t look" << "\n";
//     cout << "\t where they\'re going I have to come out" << "\n";
//     cout << "\t from somewhere and\t\t catch them.\n";
//     cout << "Refer to escape sequences table." << endl;
//     return 0;
// }
//
//
// //Problem 4: :
//
// int main()
// {
//     int a = 189;
//     char b = 'B';
//     float d = a/3;
//     int decimal_Value_of_b = b;
//     cin >> a, b = 'B';
//     cout << d;
//
//     return 0;
// }
//
//
// //Problem 11:
//
// int main ()
// {
//     double a = 1.13e3;
//     double b = 411e-4;
//     cout << a << endl;
//     cout << b << endl;
//     return 0;
// }
//
//
// //Problem 12:
//
// int main ()
// {
//     int a = 353;
//     int b = a/11;
//     int c = a%11;
//     cout << "In first group: " << b << endl;
//     cout << "In last group: " << c << endl;
//     return 0;
// }
//
//
//
// //Problem 13:
//
// int main()
// {
//     double x;
//     cout << "Enter the side of a hexagon: ";
//     cin >> x;
//     double c = 3*1.73*x*x/2;
//     cout << "Area of the hexagon is " << c << endl;
//     return 0;
// }
//
// //Problem 14:
//
// int main()
// {
//     int  num = 31;
//     int a = num++;
//     int b = a*3;
//     int c = a-14;
//     int d = a/4;
//     int e = a--;
//     int f = a%9;
//     cout << a << endl;
//     cout << b << endl;
//     cout << c << endl;
//     cout << d << endl;
//     cout << e << endl;
//     cout << f << endl;
//     cout << num << endl;
//     return 0;
// }
//
//
//
// //Problem 15:
//
// int main()
// {
//   char ch = 'A';
//     char H = ch+7;
//     char E = ch+4;
//     char L = ch+11;
//     char L2 = ch+11;
//     char O = ch+14;
//     cout << H;
//     cout << E;
//     cout << L;
//     cout << L2;
//     cout << O << "\!";
//     return 0;
// }
//
//
//
// //Problem 16:
//
// int main()
// {
//     float x = 17;
//     float y = 1;
//     float z = x+(x+y);
//     float t = ++y;
//     float u = ++y;
//     float v = t*u;
//     float w = z/v;
//     cout << w << endl;
//     return 0;
// }
//
//
// //Problem 17:
//
// int main()
// {
//     int x;
//     int y;
//     cin >> x;
//     cin >> y;
//     cout <<(x==y);
//     return 0;
// }
//
//
// //Problem 18:
//
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<< (a<140) && (a<b);
//     return 0;
// }
//
//
// //Problem 19:
//
// int main()
// {
//     int a,b,c;
//     cin>>a>>b>>c;
//     cout<<(a>b) && (a>c);
//     return 0;
// }
//
//
//
// //Problem 20:
//
// int main()
// {
//     int a,b,c,d,e;
//     cin>>a>>b>>c>>d>>e;
//     cout<< (a>=0 || b>=0 || c>=0 || d>=0 || e>=0);
//     return 0;
// }
//
// //Problem 21:
//
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout << ((a+b)>30 && (a*b)>30);
//     cout << ((a+b)>30 && (a*(b-10)<30)>30);
//     cout << ((a>30) || (b>30));
//     return 0;
// }
//
//
// //Problem 22:
//
// int main() {
//     double x, y;
//     cin >> x >> y;
//     double mikeHeight = y * 30.48;
//     cout << (mikeHeight > x);
//     return 0;
// }