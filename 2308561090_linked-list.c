#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} nodes;

nodes *head = NULL;

void push(int data_masuk)
{
    nodes *new = (nodes *) malloc (sizeof (nodes));
    if (new == NULL) {
        printf("Alokasi memori gagal\n");
        return;
    }
    new -> data = data_masuk;
    new->next = head;
    head = new;
    int main();
}

void pop()
{
    if (head == NULL) {
        printf("Linked list dalam keadaan kosong\n");
        return;
    }
    nodes *sementara = head;
    head = head->next;
    free(sementara);
}

int isEmpty()
{
    return head == NULL;
}

void print()
{
    nodes *sementara = head;
    if (isEmpty() == 1) {
        printf("Linked list dalam keadaan kosong\n");
        return;
    }
    while (sementara != NULL) {
        printf("%d ", sementara->data);
        sementara = sementara->next;
    }
    printf("\n");
}

int main()
{
    int pilihan, data;

    while(1)
    {
        printf("Program Linked List\n");
        printf("-------------------\n");
        printf("1. Insert Elemen\n");
        printf("2. Hapus Elemen\n");
        printf("3. Check Linked List\n");
        printf("4. Keluar\n");
        printf("\nMasukkan pilihan: ");
        scanf("%d", &pilihan);
        switch (pilihan)
        {
            case 1:
                printf("Masukkan data: ");
                scanf("%d", &data);
                push(data);
                system ("pause");
                system("cls");
                break;
            case 2:
                pop();
                system ("pause");
                system("cls");
                break;
            case 3:
                if (isEmpty())
                {
                    printf("Linked list kosong!\n");
                }
                else
                {
                    printf("Linked list tidak kosong!\n");
                }
                system ("pause");
                system("cls");
                break;
            case 4:
                exit(0);
            default:
                printf("Pilihan tidak valid!\n");
        }
        print();
    }
    return 0;
}