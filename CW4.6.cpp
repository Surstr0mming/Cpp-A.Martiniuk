#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double resa = sqrt(2);
    int na;
    cout <<"na=";
    cin >> na;
    if (na>0){
        for (int i=1; i<na; i++) {
            resa = sqrt(2 + resa);
        }
        cout<<"a)\n"<< "Result = "<< resa << endl;
    }
    else{
        cout << "no result " <<endl;
    }

    return 0;






}
