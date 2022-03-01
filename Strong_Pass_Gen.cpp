#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
static const char alphnum[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "0123456789" 
"abcdefghijklmnopqrstuvwxyz" "!@#$%^&";
int strLen = sizeof(alphnum)-1;

char GenRand(){
    return alphnum[rand() % strLen];
}

int main(){ 
int n, c=0, s=0;
srand(time(0));
cout<<"What length of password would you like to generate? ";
cin>>n;
cout<<n<<endl;
cout<<"Here is your unique and strong password: ";
N:
char C;
string D;

for(int z=0; z<n; z++){
    C = GenRand();
    D+=C;
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
cout<<endl<<endl<<"Thank you for using this ! ";
return 0;
}
