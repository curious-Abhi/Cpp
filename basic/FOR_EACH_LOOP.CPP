#include<iostream>
#include<string>
using namespace std;

int main(){
    
   string fruits[]={"bannana","apple","litchi"};
    int i;
//     for(i=0; i<3; i++){
//     cout<<fruits[i]<<"\n";
// }


// for(i=0;i<sizeof(fruits)/sizeof(string);i++){
//     cout<<fruits[i]<<"\n";
// }

for(string fruit:fruits){
    cout<<fruit<<"\n";
}
    return 0;
}
