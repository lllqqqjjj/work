#define LENGTH 30
typedef struct User_login {
    char name[LENGTH];
    int totalcount;
    int time;
}SDataType;
typedef struct SListNode{
    SDataType*data;
    struct SListNode*_PNext;
}Node,*PNode; 
