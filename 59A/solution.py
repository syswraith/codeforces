s=input();upperCount=sum(1 for x in s if x.isupper());print(s.upper() if upperCount > len(s)-upperCount else s.lower())
