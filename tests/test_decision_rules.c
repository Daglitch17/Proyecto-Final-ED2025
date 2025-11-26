#include <assert.h>
#include <string.h>
#include "../src/decision_system.h"

int main() {
    AnswerSet a = {1,0,0,0,0,0};
    Recommendation r = decide(a);
    return (strcmp(r.name, "Arreglo Dinamico") == 0) ? 0 : 1;
}
