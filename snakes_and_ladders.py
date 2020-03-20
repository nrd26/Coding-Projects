import random
import sys
snakes={9:2,15:8,24:11,37:20,53:30,68:44,82:70}
ladders={7:21,19:32,27:39,47:61,73:89}
MAX=100

def roll():
 dice = random.randint(1, 6)
 print('You got a '+str(dice))
 return dice

def game(p,current,dice):
 old=current
 current=current+dice
 
 if current>MAX:
  print("Player "+str(p)+" needs "+str(MAX-old)+" to win")
  return old

 if current in snakes:
  final=snakes.get(current)
  print("Player "+str(p)+" got bitten :p.You are going from "+str(current)+" to "+str(final))

 elif current in ladders:
  final=ladders.get(current)
  print("Player "+str(p)+" is climbing from "+str(current)+" to "+str(final))

 else:
  final=current

 return final

def win(p,pos):
 if MAX==pos:
  print("Player "+str(p)+" is the winner!!!")
  sys.exit()

def start():
 p1_pos=0
 p2_pos=0

 while True:
  p=1
  input_1=input("Player 1 press enter to roll dice")
  dice=roll()
  p1_pos=game(p,p1_pos,dice)
  
  print("Player 1 is at "+str(p1_pos)+" and Player 2 is at "+str(p2_pos))
  win(p,p1_pos)

  p=2
  input_2=input("Player 2 press enter to roll dice")
  dice=roll()
  p2_pos=game(p,p2_pos,dice)
  print("Player 1 is at "+str(p1_pos)+" and Player 2 is at "+str(p2_pos)) 
  win(p,p2_pos)

if __name__ == "__main__":
    start()
