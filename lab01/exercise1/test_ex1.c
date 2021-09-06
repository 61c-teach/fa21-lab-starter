#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "ex1.h"

int main(int argc, char **argv) {
    printf("Running tests...\n\n");
    /************ Part 1 Test Cases ************/
    char *str = "hello world!";

    int num_l = num_occurrences(str, 'l');
    assert(num_l == 3);

    int num_z = num_occurrences(str, 'z');
    assert(num_z == 0);

    /* TODO: Think of a scenario that is not tested by the current test cases. Create one additional test case to test this scenario. */

    printf("Congrats! If you have made it to this line, your Part 1 Test cases are all passing!\n");

    /************ Part 2 Test Cases ************/
    DNA_sequence dna_seq_1;
    strcpy(dna_seq_1.sequence, "ACTTTGAAC");
    compute_nucleotide_occurrences(&dna_seq_1);
    assert(dna_seq_1.A_count == 3);
    assert(dna_seq_1.C_count == 2);
    assert(dna_seq_1.G_count == 1);
    assert(dna_seq_1.T_count == 3);

    DNA_sequence dna_seq_2;
    strcpy(dna_seq_2.sequence, "AAAACCC");
    compute_nucleotide_occurrences(&dna_seq_2);
    assert(dna_seq_2.A_count == 4);
    assert(dna_seq_2.C_count == 3);
    assert(dna_seq_2.G_count == 0);
    assert(dna_seq_2.T_count == 0);

    /* TODO: Think of a scenario that is not tested by the current test cases. Create one additional test case to test this scenario. */

    printf("Congrats! If you have made it to this line, your Part 2 Test cases are all passing!\n");

    return 0;
}
