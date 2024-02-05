#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    int time = 0;
    cin >> a;
    for(int i = 0; i<a.length(); i++){
        if(a[i]>='A'&&a[i]<='C') time += 3;
        else if(a[i]>='D'&&a[i]<='F') time +=4;
        else if(a[i]>='G'&&a[i]<='I') time +=5;
        else if(a[i]>='J'&&a[i]<='L') time +=6;
        else if(a[i]>='M'&&a[i]<='O') time +=7;
        else if(a[i]>='P'&&a[i]<='S') time +=8;
        else if(a[i]>='T'&&a[i]<='V') time +=9;
        else if(a[i]>='W'&&a[i]<='Z') time +=10;
    }
    cout << time;

}