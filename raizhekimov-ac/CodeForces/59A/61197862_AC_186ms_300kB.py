w = input()
print("".join([x.upper() for x in w ]) if len([x for x in w if x.isupper()]) > len([x for x in w if x.islower()]) else "".join([x.lower() for x in w ]))