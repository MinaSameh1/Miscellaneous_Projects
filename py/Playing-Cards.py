
import random

class cards(object):
    def __init__( self, type_card, rank ):
        self.rank=rank
        self.type_card=type_card
    def __str__(self):
        result=str(self.rank)+self.type_card
        return result

class hands(object):
    def __init__( self, name ):
        self.name = name
        self.amount = 0
    def draw( self, card ):
        self.amount += 1
        print(card)


class Deck(object):
    types = [ 'H', 'S', 'T', 'C' ]
    Ranks = [ 1,2,3,4,5,6,7,8,9,10,'K','Q','J' ]
    def __init__( self ):
        self.ListOfCards = []
    def populate( self ):
        for type1 in Deck.types:
            for rank in Deck.Ranks:
                self.ListOfCards.append(cards(type1,rank))
    def check_cards( self ):
        print(len(self.ListOfCards))
        for i in self.ListOfCards:
            print( i )
    def shuffle( self ):
        for i in range( 0 , 52 ):
            Shuffle=random.randint( 0 , 51 ) 
            temp=self.ListOfCards[i]
            self.ListOfCards[i]=self.ListOfCards[Shuffle]
            self.ListOfCards[Shuffle]=temp
    def draw( self ):
        return self.ListOfCards.pop()

class Hands( object ):
    def __init__( self, name ):
        self.name = name 
        self.cards = [ ]
        self.points = 0
    def draw( self, Card ): 
        self.cards.append(card)
    def drop( self, index ):
        return self.self.pop( index )


Deck1=Deck()
hand1 = hands("Mina")

Deck1.populate()
Deck1.check_cards()
print("This is before shuffling!")
input("Press any key to end...")
Deck1.shuffle()
Deck1.check_cards()
print("This is after shuffling!")
input("Press any key to end...")

hand1.draw( Deck1.draw() )

hand1.drop( 0 ) 
