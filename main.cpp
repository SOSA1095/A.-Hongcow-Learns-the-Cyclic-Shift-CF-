#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string,int> mymap;
    int cont =0;
    string A,aux="";
    cin >> A;
    mymap[A]++;
    cont++;
    for(int iA=1; iA<A.length();iA++){
        for(int iB=0, iC=iA; iB<A.length();iB++,iC++){
            if(iC==A.length()){
                iC=0;
            }
            aux += A[iC];
        }
        if(mymap[aux] == 0){
            cont++;
            mymap[aux]++;
        }
        aux="";
    }
    cout << cont << endl;
    return 0;
}
