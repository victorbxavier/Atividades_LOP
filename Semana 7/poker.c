/*
Codigo incompleto
#include<stdio.h>
typedef struct{

}Card;

int main() {
    Card hands[][5] = {
        {  // Royal Flush
            { Diamonds, Ace },
            { Diamonds, King },
            { Diamonds, Queen }, 
            { Diamonds, Jack }, 
            { Diamonds, Ten } 
        },
        { // Full house
          { Heart, Jack },   
          { Spades, Jack },   
          { Clubs, Jack },     
          { Spades, Two  },    
          { Heart, Two } 
        },   
        { // Three of a Kind
          { Diamonds, Ten }, 
          { Spades, Seven },  
          { Diamonds, Four },  
          { Spades, Four  },   
          { Heart, Four } 
        },  
        { // Pair
          { Spades, Ace  },  
          { Heart, Jack },    
          { Spades, Jack },    
          { Heart, Seven },    
          { Clubs, Four } 
        },  
        { // High Card (No pair)
          { Clubs, Nine },   
          { Heart, Seven },   
          { Diamonds, Six },   
          { Spades, Four  },   
          { Heart, Two } 
        },   
    };
    Card myCards[5];
    Card oponentCards[5];
    
    unsigned handIndex;
    scanf("%u", &handIndex);
    for(int i = 0; i < 5; i++) {
        myCards[i] = hands[handIndex][i];
        scanf("%u %u", &oponentCards[i].suit, &oponentCards[i].value);
    }
    PokerHand myHand = checkHand(myCards);
    PokerHand oponentHand = checkHand(oponentCards);
    if (myHand > oponentHand) {
        switch(myHand) {
            case RoyalFlush:
                printf("É... simplesmente não tinha como me bater!\n");
                break;
            case StraightFlush:
            case FourOfAKind:
            case FullHouse:
                printf("Já era! Você não tinha chance!\n");
                break;
            case Flush:
            case Straight:
            case ThreeOfAKind:
                printf("É boy! Quem sabe da próxima vez...\n");
                break;
            default:
                printf("Tive sorte!\n");
        }
    }
    else if (oponentHand > myHand) {
        printf("Não valeu! Cê tá roubando!!!\n");
    }
    else if (myCards[0].value > oponentCards[0].value) {
        printf("Ufa! Por pouco!");
    }
    else {
        printf("Nan!! Bicho melado da gota!\n");
    }
    return 0;
}*/