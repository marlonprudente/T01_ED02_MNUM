/* 
 * File:   main.cpp
 * Author: Marlon Prudente <marlonmateuspr@gmail.com>
 *
 * Created on 20 de Maio de 2015, 17:10
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

/*
 * 
 */
int forca_bruta(int *num1, int *num2)
{
    int result;
    
    result = (*num1)*(*num2);
    return result;
}
void divisao_conquista(int *num1, int *num2)
{
    int p, r, q, s, y, pr, qs, p_q, r_s, yprqs;
    //int result;
    q = *num1%10000;
    p = (*num1 - q)/10000;    
    s = *num2%10000;
    r = (*num2 - s)/10000;
    pr = p*r;
    qs = q*s;
    p_q = p + q;
    r_s = r + s;
    y = p_q*r_s;
    yprqs = y - pr - qs;
    //result = pr*100000000 + yprqs*10000 + qs;
   // cout << "P: " << p << "Q: " << q << "R: " << r << "S: "<< s << "Y: " << y;
    //cout << "\n pr: " << pr << "qs: " << qs << "P + Q: " << p_q << "R + S" << r_s << "yprqs: " << yprqs;
    cout << " " << pr << "*10^8 + " << yprqs<< "*10^4 + " << qs;
    //return result;
}

int main(int argc, char** argv) {

    int num1 /*= 6514202*/, num2 /*= 9898989*/;
    cout << "Digite o primeiro numero: \n";
    cin >> num1;
    cout << "Digite o Segundo numero:\n";
    cin >> num2;
    
    cout <<"Forca Bruta: =>" << forca_bruta(&num1, &num2);
    cout <<"\nDivisao e Conquista: =>";
    divisao_conquista(&num1, &num2);
    
    return 0;
}

