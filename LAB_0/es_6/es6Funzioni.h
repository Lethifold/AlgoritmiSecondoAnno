#define P 25
#define Q 100

typedef struct List{
        char product[P];
        int quantity;
        float price;
        char name[P];
        } list;
        
        
    typedef struct Couple {
        char name1[P];
        char name2[P];
    } couple;
        
int get_input(FILE *, list *); // Restituisce quante righe sono state acquisite correttamente
int get_name(int, char [Q][P], list *); // Modifica un vettore vi mette i nomi e restuisce il numero di diversi nomi trovati
int diff_products(char *, list *); // Restituisce quanti diversi prodotti ogni persona vuole comprare
float costo(char *, list *); // Restituisce il costo previsto da ogni nome
void couple_finder(char [Q][P], int ,list *, couple *);