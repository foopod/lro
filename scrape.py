import requests

def getPuzzle(id):
    response_API = requests.get('http://mathsonline.org/game/jam%s.js'%(id))
    output = []

    lines = response_API.text.split('\n')

    lorryIndex = 0
    carIndex = 0

    for line in lines:
        if "vehicle[" in line:
            if "redcar" in line:
                y = line.split("fTop+",1)[1][0]
                x = line.split("fLeft+",1)[1][0]
                output.append("luggage_list.push_back(lro::Luggage(bn::fixed_point(%s,%s), true));"%(x,y))
            else :
                y = line.split("fTop+",1)[1][0]
                x = line.split("fLeft+",1)[1][0]
                if "NS" in line :
                    if "lorry" in line : 
                        output.append("luggage_list.push_back(lro::Luggage(bn::fixed_point(%s,%s), lro::Orientation::Vertical, 3,%s));"%(x,y,lorryIndex))  
                        lorryIndex+=1
                    else :
                        output.append("luggage_list.push_back(lro::Luggage(bn::fixed_point(%s,%s), lro::Orientation::Vertical, 2,%s));"%(x,y,carIndex))
                        carIndex+=1
                else :
                    if "lorry" in line : 
                        output.append("luggage_list.push_back(lro::Luggage(bn::fixed_point(%s,%s), lro::Orientation::Horizontal, 3,%s));"%(x,y,lorryIndex))  
                        lorryIndex+=1
                    else :
                        output.append("luggage_list.push_back(lro::Luggage(bn::fixed_point(%s,%s), lro::Orientation::Horizontal, 2,%s));"%(x,y,carIndex))
                        carIndex+=1
    for line in output : 
        print(line)

for x in range(1,41) :
    print("case %s : "%(x))
    getPuzzle(x)
    print("return luggage_list;")
