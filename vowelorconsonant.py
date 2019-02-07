ch=str(raw_input())
vowel=("a" , "e" , "i" , "o" , "u")
if(ch>="a" and ch<="z" or ch>="A" and ch<="Z"):
  if ch in vowel:
      print("Vowel")
  else:
    print("Consonant")
else:
    print("invalid")
