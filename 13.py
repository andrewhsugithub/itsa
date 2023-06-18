order = {'S':4,'H':3,'D':2,'C':1}

decks = int(input())
for i in range(decks):
    cards = input().split()
    cards = sorted(cards, key=lambda card: (order[card[0]],int(card[1:])),reverse=True)
    print(' '.join(str(card) for card in cards))