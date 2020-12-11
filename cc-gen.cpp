#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
int bin;
int num;
cout <<"My CC GENERATOR\n";
cout <<"Enter your Bin to generate 10-50  CC's:\n";
cin >> bin;
cout <<"Enter your amount of CC to generate...\n";
cout <<"(10,20,30,40,50) Will be accepted\n";
cin >> num;
if(num == 10){
for(int x = 1; x <= 10; x++){
    cout << bin + (rand() % 1000000)<<endl;
}
}
 else if(num == 20){
for(int x = 1; x<= 20; x++){
cout << bin + (rand() % 100000)<<endl;
}
}

else if(num == 30){
for(int x = 1; x<= 30; x++){
cout << bin + (rand() % 100000)<<endl;
}
}
else if(num == 40){
for(int x = 1; x<= 40; x++){
cout << bin + (rand() % 100000)<<endl;
}
}
else if(num ==  50){
for(int x = 1; x<= 50; x++){
cout << bin + (rand() % 100000)<<endl;
}
}
else{
cout<<"❌INVALID❌";
}
return 0;
}
//End
