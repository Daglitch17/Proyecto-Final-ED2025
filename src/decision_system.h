#ifndef DECISION_SYSTEM_H
#define DECISION_SYSTEM_H

#define MAX_ALT 2
typedef struct {
    int random_access;
    int mid_insertions;
    int key_value_lookup;
    int ordering_or_range;
    int priority;
    int graph_like;
} AnswerSet;

typedef struct {
    char name[80];
    char rationale[512];
    char alternatives[MAX_ALT][80];
} Recommendation;

AnswerSet ask_questions();
Recommendation decide(AnswerSet answers);

#endif