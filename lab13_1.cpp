#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}

void stat(const double K[], int n , double P[]){
    double a = 0;
    double b = 0;
    double c = 0;
    double d = 0;
    double A = K[0];
    double B = K[0];
    
    for (int i = 0; i < n; i++)
    {
        a += K[i];
        b += pow(K[i], 2);
        c += log(K[i]);
        d += 1/K[i];
        if (K[i] > A)A = K[i];
        if (K[i] < B)B = K[i];            
    }
   
    P[0] = a / n;

   
    P[1] = sqrt((b / n) - pow(P[0], 2));

  
    P[2] = exp(c / n);

  
    P[3] = n / d;


    P[4] = A;

    
    P[5] = B;
    



    
}
