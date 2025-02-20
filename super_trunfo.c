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

int compareAttributesInteger(int first, int second) {
    if (first > second) {
        return 1;
    }
    return 2;
}

int compareAttributesFloat(float first, float second) {
    if (first > second)
        return 1;
    return 2;
}


void compareCards(struct Card* card1, struct Card* card2) {
    printf("Comparação de Cartas: \n");
    printf("População: Carta %d venceu (%d)\n",
        compareAttributesInteger(card1->Population, card2->Population),
        (compareAttributesInteger(card1->Area, card2->Area) == 1));
    printf("Área: Carta %d venceu (%d)\n",
        compareAttributesFloat(card1->Area, card2->Area),
        compareAttributesFloat(card1->Area, card2->Area) == 1);
    printf("PIB: Carta %d venceu (%d)\n",
        compareAttributesFloat(card1->PIB, card2->PIB),
        compareAttributesFloat(card1->PIB, card2->PIB) == 1);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
        compareAttributesInteger(card1->TuristicPoints, card2->TuristicPoints),
        compareAttributesInteger(card1->TuristicPoints, card2->TuristicPoints) == 1);
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
        compareAttributesFloat(card1->DensityPopulational, card2->DensityPopulational),
        compareAttributesFloat(card1->DensityPopulational, card2->DensityPopulational) == 1);
    printf("PIB per Capita: Carta %d venceu (%d)\n",
        compareAttributesFloat(card1->PIBPerPerson, card2->PIBPerPerson),
        compareAttributesFloat(card1->PIBPerPerson, card2->PIBPerPerson) == 1);
    printf("Super Poder: Carta %d venceu (%d)\n",
        compareAttributesFloat(card1->SuperPower, card2->SuperPower),
        compareAttributesFloat(card1->SuperPower, card2->SuperPower) == 1);
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
    printf("************************************* \n");
}