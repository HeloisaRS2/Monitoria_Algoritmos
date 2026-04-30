#include <stdio.h>

int main(){

    int hora_ini, min_ini, hora_fim, min_fim;
    int seg_ini, seg_fim, seg_total;
    int horas_total, min_total, resto;

    scanf("%d %d %d %d", &hora_ini, &min_ini, &hora_fim, &min_fim);

    if(hora_ini == hora_fim && min_ini == min_fim){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else{

        seg_ini = (hora_ini * 3600) + (min_ini * 60);
        seg_fim = (hora_fim * 3600) + (min_fim * 60);

        if(seg_fim <= seg_ini){
            seg_total = (24*3600 - seg_ini) + seg_fim;
        }
        else{
            seg_total = seg_fim - seg_ini;
        }

        horas_total = seg_total / 3600;
        resto = seg_total % 3600;
        min_total = resto / 60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas_total, min_total);
    }

    return 0;
}