import random

def getValueByXY(str, x, y) :
    if(x > 5 or y > 5):
        return 'o'
    index = x
    index += y * 6
    return str[index]

def printPuzzleString(x, y, orientation, length, count):
    o = "Horizontal"
    if(orientation):
        o ="Vertical"
    print("luggage_list.push_back(lro::Luggage(bn::fixed_point(%s,%s), lro::Orientation::%s, %s,%s));"%(x,y,o,length,count))
    output.write("luggage_list.push_back(lro::Luggage(bn::fixed_point(%s,%s), lro::Orientation::%s, %s,%s));"%(x,y,o,length,count))
    output.write("\n")

def printTargetString(x, y):
    print("luggage_list.push_back(lro::Luggage(bn::fixed_point(%s,%s), true));"%(x,y))
    output.write("luggage_list.push_back(lro::Luggage(bn::fixed_point(%s,%s), true));"%(x,y))
    output.write("\n")
    

def printPuzzle(inputString) :
    lorryCount = 0
    carCount = 0
    valuesSeen = []
    for x in range(6) :
        for y in range(6) :
            value = getValueByXY(inputString,x,y)
            if(value is not 'o') :
                if(value not in valuesSeen) :
                    right = getValueByXY(inputString,x+1,y)
                    down = getValueByXY(inputString,x,y+1)
                    isHorizontal = 0
                    if(right is value):
                        if(getValueByXY(inputString,x+2,y) is value):
                            printPuzzleString(x,y,isHorizontal, 3, lorryCount)
                            lorryCount+=1
                        else :
                            if(value is 'A'):
                                printTargetString(x,y)
                            else :
                                printPuzzleString(x,y,isHorizontal, 2, carCount)
                                carCount+=1
                    if(down is value):
                        isHorizontal = 1
                        if(getValueByXY(inputString,x,y+2) is value):
                            printPuzzleString(x,y,isHorizontal, 3, lorryCount)
                            lorryCount+=1
                        else :
                            printPuzzleString(x,y,isHorizontal, 2, carCount)
                            carCount+=1
                    valuesSeen.append(value)
                            


with open('rush_500.txt') as f:
    lines = f.readlines()
    count = 0
    output = open("out_puzzle.txt", "a")

    puzzles = []
    
    for line in lines : 
        words = line.split(" ")
        if(int(words[0]) > 28 and int(words[2]) > 9050) :
            # puzzles+=1
            puzzle = words[1]
            puzzles.append(line)
            # print("case %s : "%(count+51))
            output.write("case %s : "%(count+51))
            output.write("\n")
            count+=1
            # printPuzzle(puzzle)
            # print("return luggage_list;")
            output.write("return %s;"%(words[0]))
            output.write("\n")
    
    # print(count)
       

# print(puzzles)