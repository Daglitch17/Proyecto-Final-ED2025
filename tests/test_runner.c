#include <stdio.h>
#include <stdlib.h>

int main() {
    int rc;
    rc = system("gcc tests/test_decision_rules.c src/decision_system.c -I./src -o tests/t1.exe");
    if (rc != 0) { printf("Compile failed\n"); return 1; }
    rc = system("tests\\t1.exe");
    if (rc != 0) { printf("test_decision_rules failed\n"); return 1; }
    rc = system("gcc tests/test_end_to_end.c src/decision_system.c -I./src -o tests/t2.exe");
    if (rc != 0) { printf("Compile failed2\n"); return 1; }
    rc = system("tests\\t2.exe");
    if (rc != 0) { printf("test_end_to_end failed\n"); return 1; }
    printf("Todos los tests pasaron (nota: para ejecutar la prueba completa, compile t1 y t2).\n");

    printf("\nPresiona ENTER para salir...");
    getchar(); getchar();

    return 0;
}