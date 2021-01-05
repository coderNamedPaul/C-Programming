#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main() {
    int a, b, counter = 0;
    cout <<"Hello, World!\n"<<"    (*)   " <<endl <<" (*) O (*)" <<endl <<"(*) (*) (*)"<<endl <<"  \\XXXXX/"<<endl <<"   \\XXX/"<<endl <<"    \\x/"<<endl <<"     V"<< endl;
    do {
        counter = counter + 1;
        srand(time(0));
        a = rand() % (15 - 5 + 1) + 5;
        b = rand() % (15 - 5 + 1) + 5;
        cout <<"a = "<<a<< endl;
        cout <<"b = "<<b<< endl;
        if (a < b)
            cout << "a<b" << endl;
        if (a > b)
            cout << "a>b" << endl;
        if (a == b)
            cout << "a=b" << endl;
        } while ( a != b);
    cout<<"it took "<<counter<<" tries\n";
    for (int k = 0; k < 10; k++){
        cout<< "hello, user "<<k<<endl;
    }
    for(int k = 40; k<0; k-=2){
        cout<<"k = " <<k <<endl <<"k**2 = " <<k*k  <<endl <<endl;
    }
    for(float k = 1.2; k<3; k+=0.1){
        cout<<k<<endl;
    }




    system("pause");
    return 0;
}
