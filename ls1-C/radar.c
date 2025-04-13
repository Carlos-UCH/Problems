#include<stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia){
	double horastA = tA/3600.0;
	double horastB = tB/3600.0;

	double v = distancia/(horastB-horastA);

	return v;

}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
	double velocidade = calculaVelocidadeMedia(tA,tB,distancia);

	if(velocidade > velocidadeMaxima)return 1;
	else return 0;

}


