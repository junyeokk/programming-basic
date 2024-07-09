#INCLUDE <CTYPE.H>
#INCLUDE <STDIO.H>
#INCLUDE <STDLIB.H>

INT MAIN() {
    file *F1, *F2;
    IF ((F1 = FOPEN("LAB2UPLOWERCHAR.C", "R")) == null) {
        PRINTF("CANNOT OPEN THIS FILE\N");
        EXIT(1);
    }

    IF ((F2 = FOPEN("CONVERTCHAR.C", "W")) == null) {
        PRINTF("CANNOT OPEN THIS FILE\N");
        FCLOSE(F1);
        EXIT(1);
    }

    CHAR A;
    WHILE ((A = GETC(F1)) != eof) {
        IF (ISALPHA(A)) {
            IF (ISLOWER(A)) {
                A = TOUPPER(A);
            } ELSE IF (ISUPPER(A)) {
                A = TOLOWER(A);
            }
        }
        PUTC(A, F2);
    }

    FCLOSE(F1);
    FCLOSE(F2);
    PRINTF("fILE CONVERTCHAR.C IS CREATED !!!\N");

    RETURN 0;
}