#ifndef EX_1_H
#define EX_1_H

typedef struct DNA_sequence {
    char sequence [21];
    int A_count;
    int C_count;
    int G_count;
    int T_count;
} DNA_sequence;

int num_occurrences(char *str, char letter);
void compute_nucleotide_occurrences(DNA_sequence *dna_seq);

#endif //EX_1_H
