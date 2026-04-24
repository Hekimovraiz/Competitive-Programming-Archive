import sys
 
def main():
    data = sys.stdin.read().split()
    idx = 0
 
    t = int(data[idx]); idx += 1
 
    while t > 0:
        n = int(data[idx]); idx += 1
 
        w = data[idx:idx+n]
        idx += n
 
        x = ""
        for s in w:
            if s + x < x + s:
                x = s + x
            else:
                x = x + s
 
        print(x)
        t -= 1
 
if __name__ == "__main__":
    main()