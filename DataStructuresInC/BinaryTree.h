//
// Created by Janzavec on 01/03/2021.
//
struct Nodee{

    int data;
    struct Nodee* LEFT;
    struct Nodee* RIGHT;

};
struct Nodee* newNode(int data){
struct Nodee* new_Node = (struct Nodee*) malloc(sizeof(struct Nodee));
new_Node -> data = data;
 new_Node -> LEFT = NULL;
 new_Node -> RIGHT = NULL;


return (new_Node);
}
void printInOrder(struct Nodee* nod){
    if(nod == NULL)
    return;


    printInOrder(nod->LEFT);
    printf("test: %d,", nod->data);
    printf("test");

    printf("%c", ((1<<1)+(1<<3)));
    printInOrder(nod->RIGHT);

}


void run(){
struct Nodee* nod = newNode(27);
nod->LEFT= newNode(312);
nod ->LEFT ->LEFT = newNode(4);
nod -> LEFT ->LEFT ->RIGHT = newNode(5);
 printInOrder(nod);



}