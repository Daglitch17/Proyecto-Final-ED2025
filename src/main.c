#include <stdio.h>
#include <string.h>
#include "decision_system.h"
#include "visualizer.h"
#include "pseudocode.h"
#include "examples.h"

int main() {
    printf("Sistema de Decision Guiado para Estructuras de Datos\n\n");
    AnswerSet answers = ask_questions();
    Recommendation r = decide(answers);
    printf("\n= RECOMENDACION =\n");
    printf("Estructura de Datos: %s\n\n", r.name);
    printf("Fundamentacion: %s\n\n", r.rationale);
    if (strlen(r.alternatives[0])>0)
        printf("Alternativa: %s\n", r.alternatives[0]);
    if (strlen(r.alternatives[1])>0)
        printf("Alternativa: %s\n", r.alternatives[1]);

    printf("\nVisualizacion:\n");
    visualize(r.name);

    printf("\nPseudocodigo:\n");
    print_pseudocode(r.name);

    printf("\n");
    print_example(r.name);

    printf("\nPresiona ENTER para salir...");
    getchar(); getchar();
    return 0;
}