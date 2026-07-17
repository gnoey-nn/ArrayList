//데이터가 int인 경우만 상정

#ifndef A_List_h
#define A_List_h

#define List_LEN 100 //배열 최대 길이
typedef struct _AList
{
    int arr[List_LEN]; //배열
    int num; //데이터 수
    int cur;//현재 위치의 데이터
    int curnum; //현재 위치
} AList;

void Linit(AList *prelist);
void Linsert(AList *prelist, int predata);
int Lstart(AList *prelist);
int Lnext(AList *prelist);
int Lremove(AList *prelist);
int Lcount(AList *prelist);

#endif