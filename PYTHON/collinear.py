# if you have any doubt ask, plz rate my work
def collinear3(p1, p2, p3):
    # area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2) 
    area = p1[0] * (p2[1] - p3[1]) + p2[0] * (p3[1] - p1[1]) + p3[0] * (p1[1] - p2[1]) 
    # if area is zero
    if (area == 0): 
        return True
    # if area is not zero
    return False

def collinear(l):
    l = list(set(l)) # it will remove all duplicate point
    # print l
    if len(l) <= 2:
        return True
    # scaninig points
    for i in range(0,len(l)-2):
        if not collinear3(l[i],l[i+1],l[i+2]):
            return False
    # if all point are collinear
    return True

l = [(1,1),(2,2),(2,2),(3,3),(1,1),(1,1),(1,1),(2,2)]

print l
print collinear(l)