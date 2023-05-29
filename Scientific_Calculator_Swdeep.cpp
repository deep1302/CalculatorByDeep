#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main(){
    cout<<"\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\t|       Scientific Calculator by Deep        |\n";
    cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;

    cout<<"\t--|Choose any given key to perform calculation|-- \n"<<endl;
    cout<<"\t_______________________________________________\n"<<endl;
    cout<<"\t|1:|  Additon\t\t"<<"|12:| Sin"<<endl;
    cout<<"\t|2:|  Subtaction\t"<<"|13:| Cos"<<endl;
    cout<<"\t|3:|  Multiplication\t"<<"|14:| Tan"<<endl;
    cout<<"\t|4:|  Division\t\t"<<"|15:| Inverse of Sin"<<endl;
    cout<<"\t|5:|  Exponent\t\t"<<"|16:| Invesrse of Cos"<<endl;
    cout<<"\t|6:|  Square\t\t"<<"|17:| Inverse of Tan"<<endl;
    cout<<"\t|7:|  Qube\t\t"<<"|18:| Modules"<<endl;
    cout<<"\t|8:|  Squareroot\t"<<"|19:| Remainder"<<endl;
    cout<<"\t|9:|  Ceil\t\t"<<"|20:| Dim"<<endl;
    cout<<"\t|10:| Log\t\t"<<"|21:| Round"<<endl;
    cout<<"\t|11:| Base Log\t\t"<<"|00:| Exist"<<endl;
    cout<<"\t_______________________________________________\n"<<endl;

    double a,b;
    float PI=3.14159265;
    int k;
    cout<<" Enter Number1: "<<endl;
    cin>>a;
    cout<<" Choose a key: "<<endl;
    cin>>k;
    while(k!=00){
          switch(k){
            case 1:
                cout<<" Enter Number2: "<<endl;
                cin>>b;
                cout<<" Answer is: "<<a+b<<endl;
                break;
            case 2:
                cout<<" Enter Number2: "<<endl;
                cin>>b;
                cout<<" Answer is: "<<a-b<<endl;
                break;
            case 3:
                cout<<" Enter Number2: "<<endl;
                cin>>b;
                cout<<" Answer is: "<<a*b<<endl;
                break;
            case 4:
                cout<<" Enter Number2: "<<endl;
                cin>>b;
                cout<<" Answer is: "<<a/b<<endl;
                break;
            case 5:
                cout<<" Enter Number2: "<<endl;
                cin>>b;
                cout<<" Answer is: "<<pow(a,b)<<endl;
                break;
            case 6:
                cout<<" Answer is: "<<a*a<<endl;
                break;
            case 7:
                cout<<" Answer is: "<<a*a*a<<endl;
                break;
            case 8:
                cout<<" Answer is: "<<sqrt(a)<<endl;
                break;
            case 9:
                cout<<" Answer is: "<<ceil(a)<<endl;
                break;
            case 10:
                cout<<" Answer is: "<<log10(a)<<endl;
                break;
            case 11:
                cout<<" Answer is: "<<log(a)<<endl;
                break;
            case 12:
                cout<<" Answer is: "<<sin(a*PI/180.0)<<endl;
                break;
            case 13:
                cout<<" Answer is: "<<cos(a*PI/180.0)<<endl;
                break;
            case 14:
                cout<<" Answer is: "<<tan(a*PI/180.0)<<endl;
                break;
            case 15:
                cout<<" Answer is: "<<asin(a)*180.0/PI<<endl;
                break;
            case 16:
                cout<<" Answer is: "<<acos(a)*180.0/PI<<endl;
                break;
                case 17:
                cout<<" Answer is: "<<atan(a)*180.0/PI<<endl;
                break;
                case 18:
                cout<<" Enter Number2: "<<endl;
                cin>>b;
                cout<<" Answer is: "<<fmod(a,b)<<endl;
                break;
                case 19:
                cout<<" Enter Number2: "<<endl;
                cin>>b;
                cout<<" Answer is: "<<remainder(a,b)<<endl;
                break;
                case 20:
                cout<<" Enter Number2: "<<endl;
                cin>>b;
                cout<<" Answer is: "<<fdim(a,b)<<endl;
                break;
                case 21:
                cout<<" Answer is: "<<round(a)<<endl;
                break;
                case 00:
                    break;
                default:
                    cout<<"Error Wrong Input"<<endl;
                    break;
          }
          cout<<"\t--!Thank's for use me!--\n";
          break;
          cout<<endl;
    }


        return 0;
}