#include <assert.h>
#include <string.h>
#include "../src/decision_system.h"

int main() {
    // E2E: priority -> heap
    AnswerSet a = {0,0,0,0,1,0};
    Recommendation r = decide(a);
    return (strcmp(r.name, "Monticulo / Cola de Prioridad") == 0) ? 0 : 1;
}