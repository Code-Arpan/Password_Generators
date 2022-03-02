#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
static const char alphnum[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789abcdefghijklmnopqrstuvwxyz!@#$%^&";
int strLen = sizeof(alphnum)-1;

char GenRand(){         //generating random characters
    return alphnum[rand() % strLen];   
}

int main(){ 
int n, c=0, s=0;
srand(time(0));
cout<<"What length of password would you like to generate? ";
cin>>n;
cout<<"Here is your unique password : ";
N:
char C;
string D;

for(int z=0; z<n; z++){
    C = GenRand();
    D+=C;      //concating the random chars & creating a random password
    if (isdigit(C)){
        c++;
    }
    if(C == '!' || C == '@' || C == '&' || C == '%' || C == '^' || C == '*' || C == '#' || C == '$'){
        s++;
    }
}
if (n > 2 && (s == 0 || c == 0)){
    goto N;
}
cout<<D;
cout<<"\n\n Thank you for using this ! ";
return 0;
}
