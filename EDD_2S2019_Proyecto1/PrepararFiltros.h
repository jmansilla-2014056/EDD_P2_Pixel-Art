//
// Created by User on 18/09/2019.
//


#include <iostream>
#include<fstream>
#include "GenerarMatrizes.h"
#include "Matris.h"
#include <vector>
#include <windows.h>
#include <algorithm>
#include "GenerarMatrizes.h"
#ifndef EDD_2S2019_PROYECTO1_201709396_PREPARARFILTROS_H
#define EDD_2S2019_PROYECTO1_201709396_PREPARARFILTROS_H
using namespace std;

    class PrepararFiltros: GenerarMatrizes{
    public:
        void pedirImgen();
        void generarImagenNormal();
        void Reportar_Normal();
        void Reportar_Filter();
        void generarImagenNegative();
        void generarImagenGray();
        void generarImagenXMIRROR();
        void generarImagenYMIRROR();
        void generarImagenDOBLE();
        void Reportar_Lineal(int tipo);
        void ReportarCircular();

        void generarImagenMosaico(int x, int y);

        void generarImagenNegativeCapaEspecifica(string nombre);
    };


#endif //EDD_2S2019_PROYECTO1_201709396_PREPARARFILTROS_H
