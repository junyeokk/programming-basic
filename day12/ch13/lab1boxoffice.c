#include <stdio.h>
#include <string.h>

int main() {
    typedef struct movie {
        char *title;
        int attendance;
        char director[20];
    } movie;

    movie box[] = {{"명량", 17613000, "김한민"}, {"극한직업", 16261000, "윤제균"}, {"신과함께-죄와벌", 14419000}};

    strcpy(box[2].director, "김용화");

    printf("    제목    감독    관객수\n");
    printf("=======================\n");
    for (int i = 0; i < 3; i++) {
        printf("[%15s] %6s %d\n", box[i].title, box[i].director, box[i].attendance);
    }
}