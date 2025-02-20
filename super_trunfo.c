#include <stdio.h>

struct Card {
    char State;
    char Code[3];
    char Name[25];
    int Population;
    float Area;
    float PIB;
    int TuristicPoints;
    float DensityPopulational;
    float PIBPerPerson;
    float SuperPower;
};

struct Card createCard(struct Card* card) {
    printf("Inform the State: ");
    scanf("%s", &card->State);
    printf("Inform the Code: ");
    scanf("%s", &card->Code);
    printf("Inform the Name: ");
    scanf("%s", &card->Name);
    printf("Inform the Population: ");
    scanf("%d", &card->Population);
    printf("Inform the Area: ");
    scanf("%f", &card->Area);
    printf("Inform the PIB: ");
    scanf("%f", &card->PIB);
    printf("Inform the TuristicPoints: ");
    scanf("%d", &card->TuristicPoints);
    card->DensityPopulational = (float) card->Population / card->Area;
    card->PIBPerPerson = card->PIB / (float) card->Population;
    card->SuperPower = (float) card->Population + card->Area + card->PIB + (float) card->TuristicPoints + card->PIBPerPerson + (1 / card->DensityPopulational);
}

void printCard(struct Card card) {
    printf("Estado: %c\n", card.State);
    printf("Codigo: %s\n", card.Code);
    printf("Nome da Cidade: %s\n", card.Name);
    printf("População: %d\n", card.Population);
    printf("Area: %f\n", card.Area);
    printf("PIB: %f\n", card.PIB);
    printf("Número de Pontos Turísticos: %d\n", card.TuristicPoints);
    printf("Densidade Populacional: %f\n", card.DensityPopulational);
    printf("PIB per Capita: %f\n", card.PIBPerPerson);
    printf("Super power: %f\n", card.SuperPower);
    printf("\n");
}


int compareAttribute() {
    int response = 1;
    printf("Informe sua o attributo a ser testado: "
           "(0) Populacao \n"
           "(1) de Area \n"
           "(2) de PIB \n"
           "(3) de TuristicPoints \n"
           "(4) de DensityPopulational \n"
           "(5) de PIBPerPerson \n"
           "(6) de SuperPower \n" );
    scanf("%d", &response);
    if (response > 6 || response < 0) {
        return 0;
    }
    return response;
}


void compareCards(struct Card* card1, struct Card* card2) {
    int attribute = compareAttribute();
    switch (attribute) {
        case 0:
            printf("Carta 1 - %s : %d \n", card1->Name, card1->Population);
            printf("Carta 2 - %s : %d \n", card2->Name, card2->Population);
            if (card1->Population > card2->Population) {
                printf("Resultado: Carta 1 (%s) venceu !!", card1->Name);
            } else if (card2->Population > card1->Population) {
                printf("Resultado: Carta 2 (%s) venceu !!", card2->Name);
            } else {
                printf("Resultado: Empate!!");
            }

            break;
        case 1:
            printf("Carta 1 - %s : %f \n", card1->Name, card1->Area);
            printf("Carta 2 - %s : %f \n", card2->Name, card2->Area);
            if (card1->Area > card2->Area) {
                printf("Resultado: Carta 1 (%s) venceu !!", card1->Name);
            } else if (card2->Area > card1->Area) {
                printf("Resultado: Carta 2 (%s) venceu !!", card2->Name);
            } else {
                printf("Resultado: Empate!!");
            }
            break;
        case 2:
            printf("Carta 1 - %s : %f \n", card1->Name, card1->PIB);
            printf("Carta 2 - %s : %f \n", card2->Name, card2->PIB);
            if (card1->PIB > card2->PIB) {
                printf("Resultado: Carta 1 (%s) venceu !!", card1->Name);
            } else if (card2->PIB > card1->PIB) {
                printf("Resultado: Carta 2 (%s) venceu !!", card2->Name);
            } else {
                printf("Resultado: Empate!!");
            }
            break;
        case 3:
            printf("Carta 1 - %s : %d \n", card1->Name, card1->TuristicPoints);
            printf("Carta 2 - %s : %d \n", card2->Name, card2->TuristicPoints);
            if (card1->TuristicPoints > card2->TuristicPoints) {
                printf("Resultado: Carta 1 (%s) venceu !!", card1->Name);
            } else if (card2->TuristicPoints > card1->TuristicPoints) {
                printf("Resultado: Carta 2 (%s) venceu !!", card2->Name);
            } else {
                printf("Resultado: Empate!!");
            }
            break;
        case 4:
            printf("Carta 1 - %s : %f \n", card1->Name, card1->DensityPopulational);
            printf("Carta 2 - %s : %f \n", card2->Name, card2->DensityPopulational);
            if (card1->DensityPopulational < card2->DensityPopulational) {
                printf("Resultado: Carta 1 (%s) venceu !!", card1->Name);
            } else if (card2->DensityPopulational < card1->DensityPopulational) {
                printf("Resultado: Carta 2 (%s) venceu !!", card2->Name);
            } else {
                printf("Resultado: Empate!!");
            }
            break;
        case 5:
            printf("Carta 1 - %s : %f \n", card1->Name, card1->PIBPerPerson);
            printf("Carta 2 - %s : %f \n", card2->Name, card2->PIBPerPerson);
            if (card1->PIBPerPerson > card2->PIBPerPerson) {
                printf("Resultado: Carta 1 (%s) venceu !!", card1->Name);
            } else if (card2->PIBPerPerson > card1->PIBPerPerson) {
                printf("Resultado: Carta 2 (%s) venceu !!", card2->Name);
            } else {
                printf("Resultado: Empate!!");
            }
            break;
        case 6:
            printf("Carta 1 - %s : %f \n", card1->Name, card1->SuperPower);
            printf("Carta 2 - %s : %f \n", card2->Name, card2->SuperPower);
            if (card1->SuperPower > card2->SuperPower) {
                printf("Resultado: Carta 1 (%s) venceu !!", card1->Name);
            } else if (card2->SuperPower > card1->SuperPower) {
                printf("Resultado: Carta 2 (%s) venceu !!", card2->Name);
            } else {
                printf("Resultado: Empate!!");
            }
            break;
        default:
            printf("Carta 1 - %s : %d \n", card1->Name, card1->Population);
            printf("Carta 2 - %s : %d \n", card2->Name, card2->Population);
            if (card1->Population > card2->Population) {
                printf("Resultado: Carta 1 (%s) venceu !!", card1->Name);
            } else if (card2->Population > card1->Population) {
                printf("Resultado: Carta 2 (%s) venceu !!", card2->Name);
            } else {
                printf("Resultado: Empate!!");
            }

            break;
    }
}

int main() {
    struct Card card1;
    struct Card card2;

    createCard(&card1);
    createCard(&card2);

    printf("************************************* \n");
    printf("Carta 1:");
    printCard(card1);
    printf("************************************* \n");
    printf("Carta 2:");
    printCard(card2);
    printf("************************************* \n");
    compareCards(&card1, &card2);
}
